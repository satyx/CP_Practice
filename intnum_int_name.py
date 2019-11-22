x = int(input())
split_num = []
while x>0:
    split_num.append(x%1000)
    x/=1000
    x = int(x)
place_name = {0:"",1:"Thousand",2:"Million",3:"Billion",4:"Trillion"}
num_digit = {0:"Zero",1:"One",2:"Two",3:"Three",4:"Four",5:"Five",6:"Six",7:"Seven",8:"Eight",9:"Nine",10:"Ten",11:"Eleven",12:"Twelve",13:"Thirteen",14:"Fourteen",15:"Fifteen",16:"Sixteen",17:"Seventeen",18:"Eighteen",19:"Nineteen"}
ten_place = {0:"",1:"",2:"Twenty",3:"Thirty",4:"Forty",5:"Fifty",6:"Sixty",7:"Seventy",8:"Eighty",9:"Ninety"}

result = ""
for index,i in enumerate(split_num):
    part=""
    val = str(i)
    val = "0"*(3-len(val))+val
    if len(val)==3:
        h = val[0]
        t = val[1]
        o = val[2]
        if h!="0":
            part= num_digit[int(h)]+" Hundred"

        if int(t+o) == 0:
            result = part+" "+place_name[index]+" "+result
            continue
        if h!="0":
            part = part+" and "
        if int(t+o) in num_digit:
            part += num_digit[int(t+o)]
            result = part+" "+place_name[index]+" "+result
            continue
        part = part+ten_place[int(t)]+" "+num_digit[int(o)]
        result = part+" "+place_name[index]+" "+result
        continue
print(result)