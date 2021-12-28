def mergeSort(unsortedArray):
    if len(unsortedArray) <= 1:
        return unsortedArray
    middle = len(unsortedArray)//2
    leftArray = mergeSort(unsortedArray[:middle])
    rightArray = mergeSort(unsortedArray[middle:])    
    return merge(leftArray,rightArray)

def merge(leftArray,rightArray):    
    i=j=0
    result = []
    while i<len(leftArray) and j<len(rightArray):
        if leftArray[i] < rightArray[j]:
            result.append(leftArray[i])
            i+=1
        else:
            result.append(rightArray[j])
            j+=1

    result+= leftArray[i:]
    result+= rightArray[j:]
    return result


arrayA = [11, 31, 7, 41, 101, 56, 77, 2]
array = mergeSort(arrayA)
print(array)