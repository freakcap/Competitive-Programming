# cook your dish here

t = int(input())

for i in range(t):
    ppl = int(input())
    cndy = int(input())
    
    rem = cndy % ppl
    # div = int(cndy / ppl)
    
    if(rem<ppl-rem):
        print(int(2*rem))
    elif(rem>ppl-rem):
        print(int(2*(ppl-rem)))
    else:
        print(int(2*rem-1))
    
    # sum=0
    
    # for j in range(ppl-1):
    #     sum=sum+abs(L[j]-L[j+1])
    
    # print(int(sum))
