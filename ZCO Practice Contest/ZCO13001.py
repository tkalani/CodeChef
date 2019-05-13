import sys
n=input()
strengths=raw_input().strip().split(' ')
strengths=map(int,strengths)
revenue=0
strengths.sort()
for i in range(n):
	revenue+=(2*i-n+1)*strengths[i]
print revenue