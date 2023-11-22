#!/usr/bin/python3
"""Island perimeter"""


   def island_perimeter(grid):
       """return perimeter the island showed grid
  
       Args grid list
       """
       k, t = len(grid), len(grid[0])
       lan = 0
       nei = 0
       for m in range(k):
           for n in range(t):
               if grid[m][n] == 1:
                   lan += 1
                   if m < k - 1 and grid[m+1][n] == 1:
                       nei += 1
                   if n < t - 1 and grid[m][n + 1] == 1:
                       nei += 1 
                      
       return lan * 4 - 2 * nei

