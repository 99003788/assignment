import pandas as pd 
from openpyxl import load_workbook

R1 = pd.read_excel('mini_project.xlsx', sheet_name=0)
R2 = pd.read_excel('mini_project.xlsx', sheet_name=1)
R3 = pd.read_excel('mini_project.xlsx', sheet_name=2)
R4 = pd.read_excel('mini_project.xlsx', sheet_name=3)
R5 = pd.read_excel('mini_project.xlsx', sheet_name=4)
R6 = R1.merge(R2, on = "PS NUMBER", how = "left")
R7 = R6.merge(R3, on = "PS NUMBER", how = "left")
R8 = R7.merge(R4, on = "PS NUMBER", how = "left")
R9 = R8.merge(R5, on = "PS NUMBER", how = "left")
variable_1 = int(input("Enter PS NUMBER : "))

VAL = pd.DataFrame(R9, columns= ['NAME','PS NUMBER','EMAIL ID.','RELIGION','BLOOD GROUP','DOMAIN','LOCATION','DESIGNATION','IN TIME','OUT TIME','D.O.B','PLACE OF BIRTH','MOTHER NAME','FATHER NAME','MARITAL STATUS','SPOUSE','NUMBER OF CHILDERN','AGE','MONTHLY SALARY','YEARLY SLSARY','BANK NAME','ACCOUNT DETAILS','PASSPORT DETAILS','DRIVING LISENCE DETAILS','HIGHEST QUALIFICATION','MIDDLE SCHOOL','HIGH SCHOOL','UG DETAILS','PG DETAILS','PHD DETAILS','OTHER QUQLIFICATION','MB NUMBER','HOUSE NUMBER','STREET','CITY','ZIP CODE','STATE','COUNTRY'])

VAL.set_index('PS NUMBER', inplace=True)
VAL = VAL.loc[VAL["PS NUMBER"] ==  variable_1]
print(res)

path = 'mini_project.xlsx'
book  = load_workbook(path)
writer = pd.ExcelWriter(path, engine="openpyxl")
writer.book = book
if 'mastersheet' in book.sheetnames:
    ref = book['mastersheet']
    book.remove(ref)
res.to_excel(writer, sheet_name  = 'mastersheet')
writer.save()
writer.close()
 
