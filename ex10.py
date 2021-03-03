
def drawWithWhile(N, M):
    print("Printing with While Loop")

    currRow = 0
    while (currRow < M):
        if (currRow == 0 or currRow == (M-1)):
            print(N * "*")
        else:
            currCol = 0
            while (currCol < N):
                if (currCol == 0 or currCol == (N-1)):
                    print("*", end="")
                else:
                    print(" ", end="")

                currCol +=1
            print("")
        currRow +=1


def drawWithFor(W, H):
    print("Printing with For Loop")
    

def main():
    N = int(input("please insert the width of the rectangle"))
    M = int(input("please insert the height of the rectangle"))
    
    drawWithWhile(N, M)
    drawWithFor(N, M)

main()
