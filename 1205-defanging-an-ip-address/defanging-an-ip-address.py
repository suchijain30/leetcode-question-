class Solution(object):
    def defangIPaddr(self, address):
        """
        :type address: str
        :rtype: str
        """
        res = ""
        for ch in address:
            if ch == '.':
                res += "[.]"
            else:
                res += ch
        return res

        