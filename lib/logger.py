import sys
from typing import Type

class Logger(object):
    context = ["{message}"]  # Stack

    _instance = None

    def __new__(cls):
        if cls._instance is None:
            print('Creating the object')
            cls._instance = super(Logger, cls).__new__(cls)
        return cls._instance
    
    def __enter__(self):
        return self
    
    def __exit__(self, exc_type, exc_val, exc_tb):
        self.pop_context()
    
    @staticmethod
    def push_context(pattern: str):
        Logger.context.append(Logger.context[-1].format(message=pattern))
        return Logger()
    
    @staticmethod
    def pop_context():
        if len(Logger.context) > 1:
            return Logger.context.pop()
        return None
    
    @staticmethod
    def log(message: str):
        print(Logger.context[-1].format(message=message), end="", file=sys.stdout)
        
    @staticmethod
    def error(message: str):
        print(Logger.context[-1].format(message=message), end="", file=sys.stderr)
        
    @staticmethod
    def exception(exception: Type[Exception], message: str):
        raise exception(Logger.context[-1].format(message=message))
