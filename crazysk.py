import sys
t=int(input())
while(t>0):
    t=t-1;
    x,n=input().split()
    x=int(x)
    n=int(n)
    p=n
    cards=x
    res=x
    while(cards>=n):
        res =res + int(cards/n)
        cards= int(cards/n) + cards%n		
    print(res)
    
    
