"   codechef.com - Practice problem - Easy
    ATM - http://www.codechef.com/problems/HS08TEST
    Language - Smalltalk
    Juliana Correa"

|args wd bal|
args := stdin nextLine subStrings.
wd := (args at: 1) asInteger.
bal := ((args at: 2) asNumber) roundTo: 0.01.
((wd / 5) isInteger & ((wd + 0.5) <= bal))
    ifTrue: [(bal - wd - 0.5) printNl]
    ifFalse: [bal printNl]
!
