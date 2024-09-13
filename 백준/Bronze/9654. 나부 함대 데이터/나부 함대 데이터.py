char1 = """SHIP NAME   /   CLASS    /      DEPLOYMENT /IN SERVICE
N2 Bomber      /Heavy Fighter  /Limited    /21        
J-Type 327     /Light Combat   /Unlimited  /1         
NX Cruiser     /Medium Fighter /Limited    /18        
N1 Starfighter /Medium Fighter /Unlimited  /25        
Royal Cruiser  /Light Combat   /Limited    /4"""


char2 = char1.split("\n")
for line in range(6):
    char2[line] = char2[line].split("/")
    for i in range(len(char2[line])):
        char2[line][i] = char2[line][i].strip()

for line in range(len(char2)):
    print("%-14s %-14s %-10s %-9s" %(char2[line][0],char2[line][1],char2[line][2],char2[line][3]))
