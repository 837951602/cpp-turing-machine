#undef PTR
#ifndef PTRL
#define PTRL 0
#endif // PTRL
#if PTRL&1
#if PTRL&2
#if PTRL&4
#if PTRL&8
#if PTRL&16
#if PTRL&32
#if PTRL&64
#if PTRL&128
#define PTR 255
#else
#define PTR 127
#endif
#else
#if PTRL&128
#define PTR 191
#else
#define PTR 63
#endif
#endif
#else
#if PTRL&64
#if PTRL&128
#define PTR 223
#else
#define PTR 95
#endif
#else
#if PTRL&128
#define PTR 159
#else
#define PTR 31
#endif
#endif
#endif
#else
#if PTRL&32
#if PTRL&64
#if PTRL&128
#define PTR 239
#else
#define PTR 111
#endif
#else
#if PTRL&128
#define PTR 175
#else
#define PTR 47
#endif
#endif
#else
#if PTRL&64
#if PTRL&128
#define PTR 207
#else
#define PTR 79
#endif
#else
#if PTRL&128
#define PTR 143
#else
#define PTR 15
#endif
#endif
#endif
#endif
#else
#if PTRL&16
#if PTRL&32
#if PTRL&64
#if PTRL&128
#define PTR 247
#else
#define PTR 119
#endif
#else
#if PTRL&128
#define PTR 183
#else
#define PTR 55
#endif
#endif
#else
#if PTRL&64
#if PTRL&128
#define PTR 215
#else
#define PTR 87
#endif
#else
#if PTRL&128
#define PTR 151
#else
#define PTR 23
#endif
#endif
#endif
#else
#if PTRL&32
#if PTRL&64
#if PTRL&128
#define PTR 231
#else
#define PTR 103
#endif
#else
#if PTRL&128
#define PTR 167
#else
#define PTR 39
#endif
#endif
#else
#if PTRL&64
#if PTRL&128
#define PTR 199
#else
#define PTR 71
#endif
#else
#if PTRL&128
#define PTR 135
#else
#define PTR 7
#endif
#endif
#endif
#endif
#endif
#else
#if PTRL&8
#if PTRL&16
#if PTRL&32
#if PTRL&64
#if PTRL&128
#define PTR 251
#else
#define PTR 123
#endif
#else
#if PTRL&128
#define PTR 187
#else
#define PTR 59
#endif
#endif
#else
#if PTRL&64
#if PTRL&128
#define PTR 219
#else
#define PTR 91
#endif
#else
#if PTRL&128
#define PTR 155
#else
#define PTR 27
#endif
#endif
#endif
#else
#if PTRL&32
#if PTRL&64
#if PTRL&128
#define PTR 235
#else
#define PTR 107
#endif
#else
#if PTRL&128
#define PTR 171
#else
#define PTR 43
#endif
#endif
#else
#if PTRL&64
#if PTRL&128
#define PTR 203
#else
#define PTR 75
#endif
#else
#if PTRL&128
#define PTR 139
#else
#define PTR 11
#endif
#endif
#endif
#endif
#else
#if PTRL&16
#if PTRL&32
#if PTRL&64
#if PTRL&128
#define PTR 243
#else
#define PTR 115
#endif
#else
#if PTRL&128
#define PTR 179
#else
#define PTR 51
#endif
#endif
#else
#if PTRL&64
#if PTRL&128
#define PTR 211
#else
#define PTR 83
#endif
#else
#if PTRL&128
#define PTR 147
#else
#define PTR 19
#endif
#endif
#endif
#else
#if PTRL&32
#if PTRL&64
#if PTRL&128
#define PTR 227
#else
#define PTR 99
#endif
#else
#if PTRL&128
#define PTR 163
#else
#define PTR 35
#endif
#endif
#else
#if PTRL&64
#if PTRL&128
#define PTR 195
#else
#define PTR 67
#endif
#else
#if PTRL&128
#define PTR 131
#else
#define PTR 3
#endif
#endif
#endif
#endif
#endif
#endif
#else
#if PTRL&4
#if PTRL&8
#if PTRL&16
#if PTRL&32
#if PTRL&64
#if PTRL&128
#define PTR 253
#else
#define PTR 125
#endif
#else
#if PTRL&128
#define PTR 189
#else
#define PTR 61
#endif
#endif
#else
#if PTRL&64
#if PTRL&128
#define PTR 221
#else
#define PTR 93
#endif
#else
#if PTRL&128
#define PTR 157
#else
#define PTR 29
#endif
#endif
#endif
#else
#if PTRL&32
#if PTRL&64
#if PTRL&128
#define PTR 237
#else
#define PTR 109
#endif
#else
#if PTRL&128
#define PTR 173
#else
#define PTR 45
#endif
#endif
#else
#if PTRL&64
#if PTRL&128
#define PTR 205
#else
#define PTR 77
#endif
#else
#if PTRL&128
#define PTR 141
#else
#define PTR 13
#endif
#endif
#endif
#endif
#else
#if PTRL&16
#if PTRL&32
#if PTRL&64
#if PTRL&128
#define PTR 245
#else
#define PTR 117
#endif
#else
#if PTRL&128
#define PTR 181
#else
#define PTR 53
#endif
#endif
#else
#if PTRL&64
#if PTRL&128
#define PTR 213
#else
#define PTR 85
#endif
#else
#if PTRL&128
#define PTR 149
#else
#define PTR 21
#endif
#endif
#endif
#else
#if PTRL&32
#if PTRL&64
#if PTRL&128
#define PTR 229
#else
#define PTR 101
#endif
#else
#if PTRL&128
#define PTR 165
#else
#define PTR 37
#endif
#endif
#else
#if PTRL&64
#if PTRL&128
#define PTR 197
#else
#define PTR 69
#endif
#else
#if PTRL&128
#define PTR 133
#else
#define PTR 5
#endif
#endif
#endif
#endif
#endif
#else
#if PTRL&8
#if PTRL&16
#if PTRL&32
#if PTRL&64
#if PTRL&128
#define PTR 249
#else
#define PTR 121
#endif
#else
#if PTRL&128
#define PTR 185
#else
#define PTR 57
#endif
#endif
#else
#if PTRL&64
#if PTRL&128
#define PTR 217
#else
#define PTR 89
#endif
#else
#if PTRL&128
#define PTR 153
#else
#define PTR 25
#endif
#endif
#endif
#else
#if PTRL&32
#if PTRL&64
#if PTRL&128
#define PTR 233
#else
#define PTR 105
#endif
#else
#if PTRL&128
#define PTR 169
#else
#define PTR 41
#endif
#endif
#else
#if PTRL&64
#if PTRL&128
#define PTR 201
#else
#define PTR 73
#endif
#else
#if PTRL&128
#define PTR 137
#else
#define PTR 9
#endif
#endif
#endif
#endif
#else
#if PTRL&16
#if PTRL&32
#if PTRL&64
#if PTRL&128
#define PTR 241
#else
#define PTR 113
#endif
#else
#if PTRL&128
#define PTR 177
#else
#define PTR 49
#endif
#endif
#else
#if PTRL&64
#if PTRL&128
#define PTR 209
#else
#define PTR 81
#endif
#else
#if PTRL&128
#define PTR 145
#else
#define PTR 17
#endif
#endif
#endif
#else
#if PTRL&32
#if PTRL&64
#if PTRL&128
#define PTR 225
#else
#define PTR 97
#endif
#else
#if PTRL&128
#define PTR 161
#else
#define PTR 33
#endif
#endif
#else
#if PTRL&64
#if PTRL&128
#define PTR 193
#else
#define PTR 65
#endif
#else
#if PTRL&128
#define PTR 129
#else
#define PTR 1
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#else
#if PTRL&2
#if PTRL&4
#if PTRL&8
#if PTRL&16
#if PTRL&32
#if PTRL&64
#if PTRL&128
#define PTR 254
#else
#define PTR 126
#endif
#else
#if PTRL&128
#define PTR 190
#else
#define PTR 62
#endif
#endif
#else
#if PTRL&64
#if PTRL&128
#define PTR 222
#else
#define PTR 94
#endif
#else
#if PTRL&128
#define PTR 158
#else
#define PTR 30
#endif
#endif
#endif
#else
#if PTRL&32
#if PTRL&64
#if PTRL&128
#define PTR 238
#else
#define PTR 110
#endif
#else
#if PTRL&128
#define PTR 174
#else
#define PTR 46
#endif
#endif
#else
#if PTRL&64
#if PTRL&128
#define PTR 206
#else
#define PTR 78
#endif
#else
#if PTRL&128
#define PTR 142
#else
#define PTR 14
#endif
#endif
#endif
#endif
#else
#if PTRL&16
#if PTRL&32
#if PTRL&64
#if PTRL&128
#define PTR 246
#else
#define PTR 118
#endif
#else
#if PTRL&128
#define PTR 182
#else
#define PTR 54
#endif
#endif
#else
#if PTRL&64
#if PTRL&128
#define PTR 214
#else
#define PTR 86
#endif
#else
#if PTRL&128
#define PTR 150
#else
#define PTR 22
#endif
#endif
#endif
#else
#if PTRL&32
#if PTRL&64
#if PTRL&128
#define PTR 230
#else
#define PTR 102
#endif
#else
#if PTRL&128
#define PTR 166
#else
#define PTR 38
#endif
#endif
#else
#if PTRL&64
#if PTRL&128
#define PTR 198
#else
#define PTR 70
#endif
#else
#if PTRL&128
#define PTR 134
#else
#define PTR 6
#endif
#endif
#endif
#endif
#endif
#else
#if PTRL&8
#if PTRL&16
#if PTRL&32
#if PTRL&64
#if PTRL&128
#define PTR 250
#else
#define PTR 122
#endif
#else
#if PTRL&128
#define PTR 186
#else
#define PTR 58
#endif
#endif
#else
#if PTRL&64
#if PTRL&128
#define PTR 218
#else
#define PTR 90
#endif
#else
#if PTRL&128
#define PTR 154
#else
#define PTR 26
#endif
#endif
#endif
#else
#if PTRL&32
#if PTRL&64
#if PTRL&128
#define PTR 234
#else
#define PTR 106
#endif
#else
#if PTRL&128
#define PTR 170
#else
#define PTR 42
#endif
#endif
#else
#if PTRL&64
#if PTRL&128
#define PTR 202
#else
#define PTR 74
#endif
#else
#if PTRL&128
#define PTR 138
#else
#define PTR 10
#endif
#endif
#endif
#endif
#else
#if PTRL&16
#if PTRL&32
#if PTRL&64
#if PTRL&128
#define PTR 242
#else
#define PTR 114
#endif
#else
#if PTRL&128
#define PTR 178
#else
#define PTR 50
#endif
#endif
#else
#if PTRL&64
#if PTRL&128
#define PTR 210
#else
#define PTR 82
#endif
#else
#if PTRL&128
#define PTR 146
#else
#define PTR 18
#endif
#endif
#endif
#else
#if PTRL&32
#if PTRL&64
#if PTRL&128
#define PTR 226
#else
#define PTR 98
#endif
#else
#if PTRL&128
#define PTR 162
#else
#define PTR 34
#endif
#endif
#else
#if PTRL&64
#if PTRL&128
#define PTR 194
#else
#define PTR 66
#endif
#else
#if PTRL&128
#define PTR 130
#else
#define PTR 2
#endif
#endif
#endif
#endif
#endif
#endif
#else
#if PTRL&4
#if PTRL&8
#if PTRL&16
#if PTRL&32
#if PTRL&64
#if PTRL&128
#define PTR 252
#else
#define PTR 124
#endif
#else
#if PTRL&128
#define PTR 188
#else
#define PTR 60
#endif
#endif
#else
#if PTRL&64
#if PTRL&128
#define PTR 220
#else
#define PTR 92
#endif
#else
#if PTRL&128
#define PTR 156
#else
#define PTR 28
#endif
#endif
#endif
#else
#if PTRL&32
#if PTRL&64
#if PTRL&128
#define PTR 236
#else
#define PTR 108
#endif
#else
#if PTRL&128
#define PTR 172
#else
#define PTR 44
#endif
#endif
#else
#if PTRL&64
#if PTRL&128
#define PTR 204
#else
#define PTR 76
#endif
#else
#if PTRL&128
#define PTR 140
#else
#define PTR 12
#endif
#endif
#endif
#endif
#else
#if PTRL&16
#if PTRL&32
#if PTRL&64
#if PTRL&128
#define PTR 244
#else
#define PTR 116
#endif
#else
#if PTRL&128
#define PTR 180
#else
#define PTR 52
#endif
#endif
#else
#if PTRL&64
#if PTRL&128
#define PTR 212
#else
#define PTR 84
#endif
#else
#if PTRL&128
#define PTR 148
#else
#define PTR 20
#endif
#endif
#endif
#else
#if PTRL&32
#if PTRL&64
#if PTRL&128
#define PTR 228
#else
#define PTR 100
#endif
#else
#if PTRL&128
#define PTR 164
#else
#define PTR 36
#endif
#endif
#else
#if PTRL&64
#if PTRL&128
#define PTR 196
#else
#define PTR 68
#endif
#else
#if PTRL&128
#define PTR 132
#else
#define PTR 4
#endif
#endif
#endif
#endif
#endif
#else
#if PTRL&8
#if PTRL&16
#if PTRL&32
#if PTRL&64
#if PTRL&128
#define PTR 248
#else
#define PTR 120
#endif
#else
#if PTRL&128
#define PTR 184
#else
#define PTR 56
#endif
#endif
#else
#if PTRL&64
#if PTRL&128
#define PTR 216
#else
#define PTR 88
#endif
#else
#if PTRL&128
#define PTR 152
#else
#define PTR 24
#endif
#endif
#endif
#else
#if PTRL&32
#if PTRL&64
#if PTRL&128
#define PTR 232
#else
#define PTR 104
#endif
#else
#if PTRL&128
#define PTR 168
#else
#define PTR 40
#endif
#endif
#else
#if PTRL&64
#if PTRL&128
#define PTR 200
#else
#define PTR 72
#endif
#else
#if PTRL&128
#define PTR 136
#else
#define PTR 8
#endif
#endif
#endif
#endif
#else
#if PTRL&16
#if PTRL&32
#if PTRL&64
#if PTRL&128
#define PTR 240
#else
#define PTR 112
#endif
#else
#if PTRL&128
#define PTR 176
#else
#define PTR 48
#endif
#endif
#else
#if PTRL&64
#if PTRL&128
#define PTR 208
#else
#define PTR 80
#endif
#else
#if PTRL&128
#define PTR 144
#else
#define PTR 16
#endif
#endif
#endif
#else
#if PTRL&32
#if PTRL&64
#if PTRL&128
#define PTR 224
#else
#define PTR 96
#endif
#else
#if PTRL&128
#define PTR 160
#else
#define PTR 32
#endif
#endif
#else
#if PTRL&64
#if PTRL&128
#define PTR 192
#else
#define PTR 64
#endif
#else
#if PTRL&128
#define PTR 128
#else
#define PTR 0
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#endif
