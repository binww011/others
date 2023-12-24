istr = ''.join([i for i in input() if ['a', 'e', 'i', 'o', 'u'].count(i) > 0])
print('S' if istr == istr[::-1] else 'N')
