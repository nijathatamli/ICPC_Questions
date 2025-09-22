def caesar_shift(text, k):
    """Sezar şifrəsini tətbiq et (s sürüşdürməsi ilə aç)."""
    result = []
    for ch in text:
        # 'a' = 97 ASCII
        new_char = chr((ord(ch) - ord('a') + k) % 26 + ord('a'))
        result.append(new_char)
    return "".join(result)

# --- Giriş oxuma ---
s = input().strip()               # şifrələnmiş mətn
n = int(input().strip())          # ifadələrin sayı
phrases = [input().strip() for _ in range(n)]

# --- Həll ---
for k in range(26):               # bütün sürüşdürmələr yoxlanır
    decoded = caesar_shift(s, k)
    if all(p in decoded for p in phrases):
        print(decoded)
        break
