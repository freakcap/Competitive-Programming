# cook your dish here
t= int(input())
while(t!=0):
    n=int(input())
    a=int(input())
    s=a+2*pow(10,n)
    print(s,flush=True)
    b=int(input())
    c=1+(pow(10,n)-1)-b
    print(c,flush=True)
    d=int(input())
    e=1+(pow(10,n)-1)-d
    print(e,flush=True)
    flg=int(input())
    if(flg==-1):
        break;
    t=t-1
