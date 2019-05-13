class ScoreCounter:

    def __init__(self):
        
        self.score = 0
        self.scored = False

    def check_signal(self, state):

        if state == False and not self.scored:
            
            self.score += 1
            self.scored = True
        
        elif self.scored and a == True:
            
            self.scored = False

    def print_score(self):

        print("score:", self.score)



scorer = ScoreCounter()

while True:

    a = bool(int(input("current signal: ")))

    scorer.check_signal(a)
    scorer.print_score()
