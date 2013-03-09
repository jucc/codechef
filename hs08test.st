"   codechef.com - Practice problem - Easy
    ATM - http://www.codechef.com/problems/HS08TEST
    Language - Smalltalk
    Juliana Correa
"

|args wd bal|
args := stdin nextLine subStrings.
wd := (args at: 1) asInteger.
bal := (args at: 2) asNumber.
((wd / 5) isInteger & (wd < bal))
    ifTrue: [((bal - wd) truncateTo: 2) printNl] "truncate is not working" 
    ifFalse: [bal printNl]
!
