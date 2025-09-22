class Solution:
    def isValid(self, s: str) -> bool:
        symbol_stack = []
        for symbol in s:
            if symbol in ["(", "[", "{"]:
                symbol_stack.append(symbol)
            elif len(symbol_stack) < 1:
                return False
            elif symbol == ")" and symbol_stack[-1] == "(":
                symbol_stack.pop()
            elif symbol == "]" and symbol_stack[-1] == "[":
                symbol_stack.pop()
            elif symbol == "}" and symbol_stack[-1] == "{":
                symbol_stack.pop()
            else:
                return False
        
        if len(symbol_stack) == 0:
            return True
        else:
            return False
                            