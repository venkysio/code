
arr=[5,3,2,1,4]

def VSDBubbleSort(arr):
  for i in range(len(arr)):
    for j in range(i,len(arr)-i-1):
      if arr[j]>arr[j+1]:
        arr[j],arr[j+1]=arr[j+1],arr[j]
  return arr


if __name__=="__main__":
  print(VSDBubbleSort(arr))
