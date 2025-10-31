class Solution(object):
    def spiralOrder(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: List[int]
        """
        n = len(matrix)
        m = len(matrix[0])
        ans = []
        total = n*m
        rowstart=0
        colstart =0 
        rowend = n-1
        colend = m-1
        count =0

        while count<total:
            # for rowstart(1 row), colstart to colend
            for i in range(colstart,colend+1):
                ans.append(matrix[rowstart][i])
                count +=1
            rowstart +=1

            if count == total:
                break
            
            # for colend(last row), rowstart to rowend
            for i in range(rowstart,rowend+1):
                ans.append(matrix[i][colend])
                count +=1
            colend -=1
            
            if count==total:
                break

            #for lastrow, colend to colstart
            for i in range(colend,colstart-1,-1):
                ans.append(matrix[rowend][i])
                count+=1
            
            rowend -=1
            if count==total:
                break

            # for firt col , rowstart to rowend
            for i in range(rowend,rowstart-1,-1):
                ans.append(matrix[i][colstart])
                count +=1
            
            colstart +=1
            if count ==total:
                break

        return ans

        