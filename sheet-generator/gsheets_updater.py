from __future__ import print_function
import os.path
import gspread
from oauth2client.service_account import ServiceAccountCredentials
from config import config as c

# If modifying these scopes, delete the file token.json.
SCOPES = ['https://www.googleapis.com/auth/spreadsheets']

# The ID and range of a sample spreadsheet.
SAMPLE_SPREADSHEET_ID = '1S465jKTM8H417-8LrksgCkOW55_pS63uqwQ6FXlrH0A'
SAMPLE_RANGE_NAME = 'A2:E'


def push_csv():
    """Shows basic usage of the Sheets API.
    Prints values from a sample spreadsheet.
    """
    gc = gspread.service_account(filename="credentials.json")

    spreadsheet = gc.open_by_key(SAMPLE_SPREADSHEET_ID)
    
    # Call the Sheets API
    with open(c.CSV_FILE, 'r') as file_obj:
        content = file_obj.read()
        gc.import_csv(SAMPLE_SPREADSHEET_ID, data=content)

if __name__ == '__main__':
    push_csv()
