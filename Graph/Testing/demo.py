visited = []
paths = []
class Solution:
   def visit(self,s: int, path : List[int], graph: List[List[int]]):
              if visited[s] == True:
                  paths.append(path)
                  return
              else:
                   path.append(s)
                   visited[s] = True
                   for i in range((graph[s])):
                     self.visit(i,path,graph)
           
   def allPathsSourceTarget(self, graph: List[List[int]]) -> List[List[int]]:
        path = []
        self.visit(0,path,graph)
        return paths
        


          

           







            