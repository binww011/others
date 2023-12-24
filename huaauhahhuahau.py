istr = ''.join([i for i in input() if i in "aeiou"])
print('S' if istr == istr[::-1] else 'N')
