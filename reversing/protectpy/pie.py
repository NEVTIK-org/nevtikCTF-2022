class CTF:

    _flag = "".join(["nevtik", "CTF", "{ppyth0n", "_n333d_prot3ct1on", "_df785}"])
    _pass = "n3vvvvvt1k"

    def display_me(self):
        var = input("Give me password: ")

        if var == self._pass :
            print(self._flag)

obj = CTF()

obj.display_me()
