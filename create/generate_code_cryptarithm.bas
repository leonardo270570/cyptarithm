Public Sub CryptarithmC()

    Dim filePath As String
    filePath = "D:\Flesmyn\Project\cryptarithm\cpp\cryptarithm\main.cpp"

    Dim fso As FileSystemObject
    Set fso = New FileSystemObject
    Dim fileStream As TextStream

    ' Here the actual file is created and opened for write access
    Set fileStream = fso.CreateTextFile(filePath)
    
    fileStream.WriteLine "#include <iostream>"
    fileStream.WriteLine
    fileStream.WriteLine "using namespace std;"
    fileStream.WriteLine
    fileStream.WriteLine "int main()"
    fileStream.WriteLine "{"
    
    fileStream.WriteLine "    " & "string strItems;"
    fileStream.WriteLine "    " & "string strItemsResult;"
    fileStream.WriteLine "    " & "int intA;"
    fileStream.WriteLine "    " & "int intB;"
    fileStream.WriteLine "    " & "int intCount;"
    
    intRow = 1
    Do While Not IsEmpty(ActiveSheet.Cells(intRow, 1).Value)
        strWord = ActiveSheet.Cells(intRow, 1).Value & " " & ActiveSheet.Cells(intRow, 2).Value
        strHint = "" 'ActiveSheet.Cells(intRow, 3).Value
        
        fileStream.WriteLine
        fileStream.WriteLine "    // " & strWord
        strResult = WriteToFile(strWord, strHint, fileStream, intRow)
        
        fileStream.WriteLine "label" & Trim(Str(intRow)) & " :"
        fileStream.WriteLine "    " & "cout << to_string(intCount) + " & """" & " " & """" & " + strItems + " & """" & "\n" & """" & ";"
        fileStream.WriteLine "    " & "if (intCount == 1){"
        fileStream.WriteLine "    " & "    " & "cout << strItems + " & """" & " = " & """" & " + strItemsResult + " & """" & "\n" & """" & ";"
        fileStream.WriteLine "    " & "};"
        intRow = intRow + 1
    Loop
    
    fileStream.WriteLine "    " & "return 0;"
    fileStream.WriteLine "}"

    ' Close it, so it is not locked anymore
    fileStream.Close
End Sub '

Public Sub CryptarithmCodeFromList()

    Dim filePath As String
    filePath = "D:\Flesmyn\Project\cryptarithm\cpp\cryptarithm\main.cpp"

    Dim fso As FileSystemObject
    Set fso = New FileSystemObject
    Dim fileStream As TextStream

    ' Here the actual file is created and opened for write access
    Set fileStream = fso.CreateTextFile(filePath)
    
    fileStream.WriteLine "#include <iostream>"
    fileStream.WriteLine
    fileStream.WriteLine "using namespace std;"
    fileStream.WriteLine
    fileStream.WriteLine "int main()"
    fileStream.WriteLine "{"
    
    fileStream.WriteLine "    " & "string strItems;"
    fileStream.WriteLine "    " & "string strItemsResult;"
    fileStream.WriteLine "    " & "int intA;"
    fileStream.WriteLine "    " & "int intB;"
    fileStream.WriteLine "    " & "int intCount;"
    
    intRow = ActiveCell.Row
'    Do While Not IsEmpty(ActiveSheet.Cells(intRow, 1).Value)
    strWord = ActiveSheet.Cells(intRow, 2).Value & " " & ActiveSheet.Cells(intRow, 3).Value
    strHint = "" 'ActiveSheet.Cells(intRow, 3).Value
    
    fileStream.WriteLine
    fileStream.WriteLine "    // " & strWord
    strResult = WriteToFile(strWord, strHint, fileStream, intRow)
    
    fileStream.WriteLine "label" & Trim(Str(intRow)) & " :"
    fileStream.WriteLine "    " & "cout << to_string(intCount) + " & """" & " " & """" & " + strItems + " & """" & "\n" & """" & ";"
    fileStream.WriteLine "    " & "if (intCount == 1){"
    fileStream.WriteLine "    " & "    " & "cout << strItems + " & """" & " = " & """" & " + strItemsResult + " & """" & "\n" & """" & ";"
    fileStream.WriteLine "    " & "};"
'        intRow = intRow + 1
'    Loop
    
    fileStream.WriteLine "    " & "return 0;"
    fileStream.WriteLine "}"

    ' Close it, so it is not locked anymore
    fileStream.Close
End Sub '

Public Function WriteToFile(ByVal strWord As String, ByVal strHint As String, _
    ByVal fileStream, ByVal intRow As Integer)
    
    Dim strParseWord(10) '10 could be extended
    
    strFirstLetter = "" 'first letter of all words
    strItems = "" 'all letters in all words
    intCountWord = 0 'counted number of words
    strOperator = "+" 'operation of numbers
    
    'parsing the word into each part
    Do While True
        'to detect space in the word
        intInstr = InStr(1, strWord, " ")
        
        'parsing the words
        strParseWord(intCountWord) = Mid(strWord, 1, IIf(intInstr = 0, Len(strWord), intInstr - 1))
        'collect all first letter of the words
        strFirstLetter = strFirstLetter & Mid(strParseWord(intCountWord), 1, 1)
        
        'to get all the letters and put into strItems
        Call ParseItemC(strParseWord(intCountWord), strItems)
        
        If intInstr = 0 Then Exit Do
        
        strWord = Mid(strWord, intInstr + 1)
        intCountWord = intCountWord + 1
    Loop
    
    
    intLength = Len(strItems)
    If intLength <= 10 Then
        'fileStream.WriteLine
        fileStream.WriteLine "    " & "strItems = " & """" & strItems & """" & ";"
        fileStream.WriteLine "    " & "intA = 0;"
        fileStream.WriteLine "    " & "intB = 0;"
        fileStream.WriteLine "    " & "intCount = 0;"
        fileStream.WriteLine
        
        'for letter from 0 to 9 or from 1 to 9
        For i = 1 To intLength
            'if starting letters then for statement is begun from 1
            If InStr(1, strFirstLetter, Mid(strItems, i, 1)) = 0 Then strZeroOne = "0" Else strZeroOne = "1"
            'write for statement looping
            fileStream.WriteLine Space(4 * i) & "for (int " & LCase(Mid(strItems, i, 1)) & " = " & strZeroOne & "; " & _
                LCase(Mid(strItems, i, 1)) & " < 10; " & LCase(Mid(strItems, i, 1)) & " = " & _
                LCase(Mid(strItems, i, 1)) & " + 1) {"
        Next
        
        'for conditional different number for each others
        strCondition = ""
        For i = 1 To intLength - 1
            For j = i + 1 To intLength
                strCondition = strCondition & " " & LCase(Mid(strItems, i, 1)) & " != " & _
                    LCase(Mid(strItems, j, 1)) & IIf(i = intLength - 1 And j = intLength, "", " &&")
            Next
        Next
        
        'set input and output into variables intA and intB
        For i = 0 To intCountWord - 1
            fileStream.WriteLine Space(4 * (intLength + IIf(i = 0, 1, 2))) & IIf(i = 0, "intA = ", "") & _
                "(" & ParseDigitC(strParseWord(i)) & ") " & IIf(i = intCountWord - 1, ";", strOperator)
        Next
        fileStream.WriteLine Space(4 * (intLength + 1)) & "intB = " & ParseDigitC(strParseWord(intCountWord)) & ";"
        
        'condition for intA = intB
        fileStream.WriteLine Space(4 * (intLength + 1)) & "if (intA == intB) {"
        
        'output of all letters into numbers
        strResult = ""
        For i = 1 To intLength
            strResult = strResult & "to_string(" & LCase(Mid(strItems, i, 1)) & ")" & IIf(i = intLength, "", " + ")
        Next
        
        'condition for each letter is different number
        fileStream.WriteLine Space(4 * (intLength + 2)) & "if (" & strCondition & ") {"
        
        'condition if any hint
        If strHint <> "" Then
            fileStream.WriteLine Space(4 * (intLength + 3)) & "if (" & LCase(strHint) & "){"
        End If
        
        'for strItemsResult variable
        fileStream.WriteLine Space(4 * (intLength + 4)) & "strItemsResult = " & strResult & ";"
        fileStream.WriteLine Space(4 * (intLength + 4)) & "cout << strItemsResult" & " + " & """" & " \n" & """" & ";"
        fileStream.WriteLine Space(4 * (intLength + 4)) & "intCount = intCount + 1;"
        If strHint <> "" Then
            fileStream.WriteLine Space(4 * (intLength + 3)) & "};"
        End If
        
        'closing of statements
        fileStream.WriteLine Space(4 * (intLength + 2)) & "};"
        fileStream.WriteLine Space(4 * (intLength + 1)) & "};"
        
        For i = 1 To intLength
            fileStream.WriteLine Space(4 * (intLength - i + 1)) & "};"
        Next
        
        fileStream.WriteLine
    End If
    
    WriteToFile = strResult
End Function

'convert strWord into a + b * 10 + c * 100 + ...
Public Function ParseDigitC(ByVal strWord)
    intLength = Len(strWord)
    strParseDigit = ""
   
    For i = intLength To 1 Step -1
        strItem = Mid(strWord, intLength - i + 1, 1)
        
        strParseDigit = LCase(strItem) & IIf(i > 1, " * " & 10 ^ (i - 1), "") & IIf(i = intLength, "", " + ") & strParseDigit
       
    Next
    ParseDigitC = strParseDigit
End Function

'collect all letters from strWord into strItems
Public Sub ParseItemC(ByVal strWord, ByRef strItems)
    intLength = Len(strWord)
   
    For i = 1 To intLength
        strItem = Mid(strWord, i, 1)
        If InStr(1, strItems, strItem) = 0 Then
            strItems = strItems & strItem
        End If
    Next
End Sub

