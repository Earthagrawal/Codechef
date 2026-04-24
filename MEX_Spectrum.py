
from collections import defaultdict, Counter
intput = lambda: int(input())
lput = lambda: list(map(int, input().split()))
dput = lambda: map(int, input().split())
Dict = defaultdict (list)

def solve():
    n = intput()
    l = lput()
    ll = [0 for i in range(n+1)]

    for i in l:
        ll[i]+=1
    
    zerocount=0

    for i in range(0,n+1):
        if(ll[i]==0):
            print(zerocount, end=" ")
            zerocount+=1
        else:
            if(ll[i]>=zerocount):
                print(ll[i], end=" ")
            else:
                print(zerocount, end=" ")
    

    print()



t=1
t = int(input())
for _ in range(t):
    solve()
