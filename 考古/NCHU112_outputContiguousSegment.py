#NCHU112

#Given a binary string s, return true if the longest contiguous segment 
#of 1's is strictly longer than the longest contiguous segment of O's in s, 
#or return false otherwise.
#For example, in s = "110100010" the longest continuous segment of ls has length 2
#and the longest continuous segment of 0s has length 3.
#Note that if there are no O's, then the longest continuous segment of O's
#is considered to have a length 0. The same applies if there is no 1’s

#思考:如果下一個不是本身 須把0和1累計的sum分開 
#思考:如何記得最大的count0和count1

def countchar():
    s = "1101111100010"
    count0 = 0
    count1 = 0
    max_count0 = 0
    max_count1 = 0
    for char in s:
        if char == '0':
            count0 += 1
            count1 = 0
            max_count0 = max(max_count0, count0)
        else:
            count1 += 1
            count0 = 0
            max_count1 = max(max_count1, count1)
            
    print(max(max_count0, max_count1))

countchar()