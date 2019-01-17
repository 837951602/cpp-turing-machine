#undef PTRL
#ifndef PTR
#define PTR 0
#endif // PTR
#if PTR&1
#if PTR&2
#if PTR&4
#if PTR&8
#if PTR&16
#if PTR&32
#if PTR&64
#if PTR&128
#define PTRL 255
#else
#define PTRL 127
#endif
#else
#if PTR&128
#define PTRL 191
#else
#define PTRL 63
#endif
#endif
#else
#if PTR&64
#if PTR&128
#define PTRL 223
#else
#define PTRL 95
#endif
#else
#if PTR&128
#define PTRL 159
#else
#define PTRL 31
#endif
#endif
#endif
#else
#if PTR&32
#if PTR&64
#if PTR&128
#define PTRL 239
#else
#define PTRL 111
#endif
#else
#if PTR&128
#define PTRL 175
#else
#define PTRL 47
#endif
#endif
#else
#if PTR&64
#if PTR&128
#define PTRL 207
#else
#define PTRL 79
#endif
#else
#if PTR&128
#define PTRL 143
#else
#define PTRL 15
#endif
#endif
#endif
#endif
#else
#if PTR&16
#if PTR&32
#if PTR&64
#if PTR&128
#define PTRL 247
#else
#define PTRL 119
#endif
#else
#if PTR&128
#define PTRL 183
#else
#define PTRL 55
#endif
#endif
#else
#if PTR&64
#if PTR&128
#define PTRL 215
#else
#define PTRL 87
#endif
#else
#if PTR&128
#define PTRL 151
#else
#define PTRL 23
#endif
#endif
#endif
#else
#if PTR&32
#if PTR&64
#if PTR&128
#define PTRL 231
#else
#define PTRL 103
#endif
#else
#if PTR&128
#define PTRL 167
#else
#define PTRL 39
#endif
#endif
#else
#if PTR&64
#if PTR&128
#define PTRL 199
#else
#define PTRL 71
#endif
#else
#if PTR&128
#define PTRL 135
#else
#define PTRL 7
#endif
#endif
#endif
#endif
#endif
#else
#if PTR&8
#if PTR&16
#if PTR&32
#if PTR&64
#if PTR&128
#define PTRL 251
#else
#define PTRL 123
#endif
#else
#if PTR&128
#define PTRL 187
#else
#define PTRL 59
#endif
#endif
#else
#if PTR&64
#if PTR&128
#define PTRL 219
#else
#define PTRL 91
#endif
#else
#if PTR&128
#define PTRL 155
#else
#define PTRL 27
#endif
#endif
#endif
#else
#if PTR&32
#if PTR&64
#if PTR&128
#define PTRL 235
#else
#define PTRL 107
#endif
#else
#if PTR&128
#define PTRL 171
#else
#define PTRL 43
#endif
#endif
#else
#if PTR&64
#if PTR&128
#define PTRL 203
#else
#define PTRL 75
#endif
#else
#if PTR&128
#define PTRL 139
#else
#define PTRL 11
#endif
#endif
#endif
#endif
#else
#if PTR&16
#if PTR&32
#if PTR&64
#if PTR&128
#define PTRL 243
#else
#define PTRL 115
#endif
#else
#if PTR&128
#define PTRL 179
#else
#define PTRL 51
#endif
#endif
#else
#if PTR&64
#if PTR&128
#define PTRL 211
#else
#define PTRL 83
#endif
#else
#if PTR&128
#define PTRL 147
#else
#define PTRL 19
#endif
#endif
#endif
#else
#if PTR&32
#if PTR&64
#if PTR&128
#define PTRL 227
#else
#define PTRL 99
#endif
#else
#if PTR&128
#define PTRL 163
#else
#define PTRL 35
#endif
#endif
#else
#if PTR&64
#if PTR&128
#define PTRL 195
#else
#define PTRL 67
#endif
#else
#if PTR&128
#define PTRL 131
#else
#define PTRL 3
#endif
#endif
#endif
#endif
#endif
#endif
#else
#if PTR&4
#if PTR&8
#if PTR&16
#if PTR&32
#if PTR&64
#if PTR&128
#define PTRL 253
#else
#define PTRL 125
#endif
#else
#if PTR&128
#define PTRL 189
#else
#define PTRL 61
#endif
#endif
#else
#if PTR&64
#if PTR&128
#define PTRL 221
#else
#define PTRL 93
#endif
#else
#if PTR&128
#define PTRL 157
#else
#define PTRL 29
#endif
#endif
#endif
#else
#if PTR&32
#if PTR&64
#if PTR&128
#define PTRL 237
#else
#define PTRL 109
#endif
#else
#if PTR&128
#define PTRL 173
#else
#define PTRL 45
#endif
#endif
#else
#if PTR&64
#if PTR&128
#define PTRL 205
#else
#define PTRL 77
#endif
#else
#if PTR&128
#define PTRL 141
#else
#define PTRL 13
#endif
#endif
#endif
#endif
#else
#if PTR&16
#if PTR&32
#if PTR&64
#if PTR&128
#define PTRL 245
#else
#define PTRL 117
#endif
#else
#if PTR&128
#define PTRL 181
#else
#define PTRL 53
#endif
#endif
#else
#if PTR&64
#if PTR&128
#define PTRL 213
#else
#define PTRL 85
#endif
#else
#if PTR&128
#define PTRL 149
#else
#define PTRL 21
#endif
#endif
#endif
#else
#if PTR&32
#if PTR&64
#if PTR&128
#define PTRL 229
#else
#define PTRL 101
#endif
#else
#if PTR&128
#define PTRL 165
#else
#define PTRL 37
#endif
#endif
#else
#if PTR&64
#if PTR&128
#define PTRL 197
#else
#define PTRL 69
#endif
#else
#if PTR&128
#define PTRL 133
#else
#define PTRL 5
#endif
#endif
#endif
#endif
#endif
#else
#if PTR&8
#if PTR&16
#if PTR&32
#if PTR&64
#if PTR&128
#define PTRL 249
#else
#define PTRL 121
#endif
#else
#if PTR&128
#define PTRL 185
#else
#define PTRL 57
#endif
#endif
#else
#if PTR&64
#if PTR&128
#define PTRL 217
#else
#define PTRL 89
#endif
#else
#if PTR&128
#define PTRL 153
#else
#define PTRL 25
#endif
#endif
#endif
#else
#if PTR&32
#if PTR&64
#if PTR&128
#define PTRL 233
#else
#define PTRL 105
#endif
#else
#if PTR&128
#define PTRL 169
#else
#define PTRL 41
#endif
#endif
#else
#if PTR&64
#if PTR&128
#define PTRL 201
#else
#define PTRL 73
#endif
#else
#if PTR&128
#define PTRL 137
#else
#define PTRL 9
#endif
#endif
#endif
#endif
#else
#if PTR&16
#if PTR&32
#if PTR&64
#if PTR&128
#define PTRL 241
#else
#define PTRL 113
#endif
#else
#if PTR&128
#define PTRL 177
#else
#define PTRL 49
#endif
#endif
#else
#if PTR&64
#if PTR&128
#define PTRL 209
#else
#define PTRL 81
#endif
#else
#if PTR&128
#define PTRL 145
#else
#define PTRL 17
#endif
#endif
#endif
#else
#if PTR&32
#if PTR&64
#if PTR&128
#define PTRL 225
#else
#define PTRL 97
#endif
#else
#if PTR&128
#define PTRL 161
#else
#define PTRL 33
#endif
#endif
#else
#if PTR&64
#if PTR&128
#define PTRL 193
#else
#define PTRL 65
#endif
#else
#if PTR&128
#define PTRL 129
#else
#define PTRL 1
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#else
#if PTR&2
#if PTR&4
#if PTR&8
#if PTR&16
#if PTR&32
#if PTR&64
#if PTR&128
#define PTRL 254
#else
#define PTRL 126
#endif
#else
#if PTR&128
#define PTRL 190
#else
#define PTRL 62
#endif
#endif
#else
#if PTR&64
#if PTR&128
#define PTRL 222
#else
#define PTRL 94
#endif
#else
#if PTR&128
#define PTRL 158
#else
#define PTRL 30
#endif
#endif
#endif
#else
#if PTR&32
#if PTR&64
#if PTR&128
#define PTRL 238
#else
#define PTRL 110
#endif
#else
#if PTR&128
#define PTRL 174
#else
#define PTRL 46
#endif
#endif
#else
#if PTR&64
#if PTR&128
#define PTRL 206
#else
#define PTRL 78
#endif
#else
#if PTR&128
#define PTRL 142
#else
#define PTRL 14
#endif
#endif
#endif
#endif
#else
#if PTR&16
#if PTR&32
#if PTR&64
#if PTR&128
#define PTRL 246
#else
#define PTRL 118
#endif
#else
#if PTR&128
#define PTRL 182
#else
#define PTRL 54
#endif
#endif
#else
#if PTR&64
#if PTR&128
#define PTRL 214
#else
#define PTRL 86
#endif
#else
#if PTR&128
#define PTRL 150
#else
#define PTRL 22
#endif
#endif
#endif
#else
#if PTR&32
#if PTR&64
#if PTR&128
#define PTRL 230
#else
#define PTRL 102
#endif
#else
#if PTR&128
#define PTRL 166
#else
#define PTRL 38
#endif
#endif
#else
#if PTR&64
#if PTR&128
#define PTRL 198
#else
#define PTRL 70
#endif
#else
#if PTR&128
#define PTRL 134
#else
#define PTRL 6
#endif
#endif
#endif
#endif
#endif
#else
#if PTR&8
#if PTR&16
#if PTR&32
#if PTR&64
#if PTR&128
#define PTRL 250
#else
#define PTRL 122
#endif
#else
#if PTR&128
#define PTRL 186
#else
#define PTRL 58
#endif
#endif
#else
#if PTR&64
#if PTR&128
#define PTRL 218
#else
#define PTRL 90
#endif
#else
#if PTR&128
#define PTRL 154
#else
#define PTRL 26
#endif
#endif
#endif
#else
#if PTR&32
#if PTR&64
#if PTR&128
#define PTRL 234
#else
#define PTRL 106
#endif
#else
#if PTR&128
#define PTRL 170
#else
#define PTRL 42
#endif
#endif
#else
#if PTR&64
#if PTR&128
#define PTRL 202
#else
#define PTRL 74
#endif
#else
#if PTR&128
#define PTRL 138
#else
#define PTRL 10
#endif
#endif
#endif
#endif
#else
#if PTR&16
#if PTR&32
#if PTR&64
#if PTR&128
#define PTRL 242
#else
#define PTRL 114
#endif
#else
#if PTR&128
#define PTRL 178
#else
#define PTRL 50
#endif
#endif
#else
#if PTR&64
#if PTR&128
#define PTRL 210
#else
#define PTRL 82
#endif
#else
#if PTR&128
#define PTRL 146
#else
#define PTRL 18
#endif
#endif
#endif
#else
#if PTR&32
#if PTR&64
#if PTR&128
#define PTRL 226
#else
#define PTRL 98
#endif
#else
#if PTR&128
#define PTRL 162
#else
#define PTRL 34
#endif
#endif
#else
#if PTR&64
#if PTR&128
#define PTRL 194
#else
#define PTRL 66
#endif
#else
#if PTR&128
#define PTRL 130
#else
#define PTRL 2
#endif
#endif
#endif
#endif
#endif
#endif
#else
#if PTR&4
#if PTR&8
#if PTR&16
#if PTR&32
#if PTR&64
#if PTR&128
#define PTRL 252
#else
#define PTRL 124
#endif
#else
#if PTR&128
#define PTRL 188
#else
#define PTRL 60
#endif
#endif
#else
#if PTR&64
#if PTR&128
#define PTRL 220
#else
#define PTRL 92
#endif
#else
#if PTR&128
#define PTRL 156
#else
#define PTRL 28
#endif
#endif
#endif
#else
#if PTR&32
#if PTR&64
#if PTR&128
#define PTRL 236
#else
#define PTRL 108
#endif
#else
#if PTR&128
#define PTRL 172
#else
#define PTRL 44
#endif
#endif
#else
#if PTR&64
#if PTR&128
#define PTRL 204
#else
#define PTRL 76
#endif
#else
#if PTR&128
#define PTRL 140
#else
#define PTRL 12
#endif
#endif
#endif
#endif
#else
#if PTR&16
#if PTR&32
#if PTR&64
#if PTR&128
#define PTRL 244
#else
#define PTRL 116
#endif
#else
#if PTR&128
#define PTRL 180
#else
#define PTRL 52
#endif
#endif
#else
#if PTR&64
#if PTR&128
#define PTRL 212
#else
#define PTRL 84
#endif
#else
#if PTR&128
#define PTRL 148
#else
#define PTRL 20
#endif
#endif
#endif
#else
#if PTR&32
#if PTR&64
#if PTR&128
#define PTRL 228
#else
#define PTRL 100
#endif
#else
#if PTR&128
#define PTRL 164
#else
#define PTRL 36
#endif
#endif
#else
#if PTR&64
#if PTR&128
#define PTRL 196
#else
#define PTRL 68
#endif
#else
#if PTR&128
#define PTRL 132
#else
#define PTRL 4
#endif
#endif
#endif
#endif
#endif
#else
#if PTR&8
#if PTR&16
#if PTR&32
#if PTR&64
#if PTR&128
#define PTRL 248
#else
#define PTRL 120
#endif
#else
#if PTR&128
#define PTRL 184
#else
#define PTRL 56
#endif
#endif
#else
#if PTR&64
#if PTR&128
#define PTRL 216
#else
#define PTRL 88
#endif
#else
#if PTR&128
#define PTRL 152
#else
#define PTRL 24
#endif
#endif
#endif
#else
#if PTR&32
#if PTR&64
#if PTR&128
#define PTRL 232
#else
#define PTRL 104
#endif
#else
#if PTR&128
#define PTRL 168
#else
#define PTRL 40
#endif
#endif
#else
#if PTR&64
#if PTR&128
#define PTRL 200
#else
#define PTRL 72
#endif
#else
#if PTR&128
#define PTRL 136
#else
#define PTRL 8
#endif
#endif
#endif
#endif
#else
#if PTR&16
#if PTR&32
#if PTR&64
#if PTR&128
#define PTRL 240
#else
#define PTRL 112
#endif
#else
#if PTR&128
#define PTRL 176
#else
#define PTRL 48
#endif
#endif
#else
#if PTR&64
#if PTR&128
#define PTRL 208
#else
#define PTRL 80
#endif
#else
#if PTR&128
#define PTRL 144
#else
#define PTRL 16
#endif
#endif
#endif
#else
#if PTR&32
#if PTR&64
#if PTR&128
#define PTRL 224
#else
#define PTRL 96
#endif
#else
#if PTR&128
#define PTRL 160
#else
#define PTRL 32
#endif
#endif
#else
#if PTR&64
#if PTR&128
#define PTRL 192
#else
#define PTRL 64
#endif
#else
#if PTR&128
#define PTRL 128
#else
#define PTRL 0
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#endif
