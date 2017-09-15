
def breakNum(n):
    n = list(n)
    numList = []
    while len(n) >= 1:
        numList.append(str(n))
        n.remove(n[0])
    return numList

def mergeSort(alist):
    if len(alist) > 1:
        mid = len(alist)//2
        left = alist[:mid]
        right = alist[mid:]
        mergeSort(left)
        mergeSort(right)
        [i,j,k] = [0,0,0]
        while i < len(left) and j < len(right):
            if left[i] > right[j]:
                alist[k] = right[j]
                j += 1
            else:
                alist[k] = left[i]
                i += 1
            k += 1
        while i < len(left):
            alist[k] = left[i]
            i += 1
            k += 1
        while j < len(right):
            alist[k] = right[j]
            j += 1
            k += 1

# trying mergeSort
alist =[4,6,1,3]
mergeSort(alist)
print(alist)
