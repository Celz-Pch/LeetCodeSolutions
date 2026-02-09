##
## EPITECH PROJECT, 2026
## LeetCode
## File description:
## 867
##

import numpy as np

class Solution(object):
    def transpose(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: List[List[int]]
        """
        return np.transpose(matrix).tolist()

