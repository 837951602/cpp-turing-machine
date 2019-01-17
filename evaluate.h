#undef PTRL
#if (COMMAND)&1
#if (COMMAND)&2
#if (COMMAND)&4
#if (COMMAND)&8
#if (COMMAND)&16
#if (COMMAND)&32
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 255
#define PTR 255
#else
#undef PTR
#define PTRL 127
#define PTR 127
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 191
#define PTR 191
#else
#undef PTR
#define PTRL 63
#define PTR 63
#endif
#endif
#else
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 223
#define PTR 223
#else
#undef PTR
#define PTRL 95
#define PTR 95
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 159
#define PTR 159
#else
#undef PTR
#define PTRL 31
#define PTR 31
#endif
#endif
#endif
#else
#if (COMMAND)&32
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 239
#define PTR 239
#else
#undef PTR
#define PTRL 111
#define PTR 111
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 175
#define PTR 175
#else
#undef PTR
#define PTRL 47
#define PTR 47
#endif
#endif
#else
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 207
#define PTR 207
#else
#undef PTR
#define PTRL 79
#define PTR 79
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 143
#define PTR 143
#else
#undef PTR
#define PTRL 15
#define PTR 15
#endif
#endif
#endif
#endif
#else
#if (COMMAND)&16
#if (COMMAND)&32
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 247
#define PTR 247
#else
#undef PTR
#define PTRL 119
#define PTR 119
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 183
#define PTR 183
#else
#undef PTR
#define PTRL 55
#define PTR 55
#endif
#endif
#else
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 215
#define PTR 215
#else
#undef PTR
#define PTRL 87
#define PTR 87
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 151
#define PTR 151
#else
#undef PTR
#define PTRL 23
#define PTR 23
#endif
#endif
#endif
#else
#if (COMMAND)&32
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 231
#define PTR 231
#else
#undef PTR
#define PTRL 103
#define PTR 103
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 167
#define PTR 167
#else
#undef PTR
#define PTRL 39
#define PTR 39
#endif
#endif
#else
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 199
#define PTR 199
#else
#undef PTR
#define PTRL 71
#define PTR 71
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 135
#define PTR 135
#else
#undef PTR
#define PTRL 7
#define PTR 7
#endif
#endif
#endif
#endif
#endif
#else
#if (COMMAND)&8
#if (COMMAND)&16
#if (COMMAND)&32
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 251
#define PTR 251
#else
#undef PTR
#define PTRL 123
#define PTR 123
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 187
#define PTR 187
#else
#undef PTR
#define PTRL 59
#define PTR 59
#endif
#endif
#else
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 219
#define PTR 219
#else
#undef PTR
#define PTRL 91
#define PTR 91
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 155
#define PTR 155
#else
#undef PTR
#define PTRL 27
#define PTR 27
#endif
#endif
#endif
#else
#if (COMMAND)&32
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 235
#define PTR 235
#else
#undef PTR
#define PTRL 107
#define PTR 107
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 171
#define PTR 171
#else
#undef PTR
#define PTRL 43
#define PTR 43
#endif
#endif
#else
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 203
#define PTR 203
#else
#undef PTR
#define PTRL 75
#define PTR 75
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 139
#define PTR 139
#else
#undef PTR
#define PTRL 11
#define PTR 11
#endif
#endif
#endif
#endif
#else
#if (COMMAND)&16
#if (COMMAND)&32
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 243
#define PTR 243
#else
#undef PTR
#define PTRL 115
#define PTR 115
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 179
#define PTR 179
#else
#undef PTR
#define PTRL 51
#define PTR 51
#endif
#endif
#else
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 211
#define PTR 211
#else
#undef PTR
#define PTRL 83
#define PTR 83
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 147
#define PTR 147
#else
#undef PTR
#define PTRL 19
#define PTR 19
#endif
#endif
#endif
#else
#if (COMMAND)&32
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 227
#define PTR 227
#else
#undef PTR
#define PTRL 99
#define PTR 99
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 163
#define PTR 163
#else
#undef PTR
#define PTRL 35
#define PTR 35
#endif
#endif
#else
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 195
#define PTR 195
#else
#undef PTR
#define PTRL 67
#define PTR 67
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 131
#define PTR 131
#else
#undef PTR
#define PTRL 3
#define PTR 3
#endif
#endif
#endif
#endif
#endif
#endif
#else
#if (COMMAND)&4
#if (COMMAND)&8
#if (COMMAND)&16
#if (COMMAND)&32
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 253
#define PTR 253
#else
#undef PTR
#define PTRL 125
#define PTR 125
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 189
#define PTR 189
#else
#undef PTR
#define PTRL 61
#define PTR 61
#endif
#endif
#else
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 221
#define PTR 221
#else
#undef PTR
#define PTRL 93
#define PTR 93
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 157
#define PTR 157
#else
#undef PTR
#define PTRL 29
#define PTR 29
#endif
#endif
#endif
#else
#if (COMMAND)&32
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 237
#define PTR 237
#else
#undef PTR
#define PTRL 109
#define PTR 109
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 173
#define PTR 173
#else
#undef PTR
#define PTRL 45
#define PTR 45
#endif
#endif
#else
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 205
#define PTR 205
#else
#undef PTR
#define PTRL 77
#define PTR 77
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 141
#define PTR 141
#else
#undef PTR
#define PTRL 13
#define PTR 13
#endif
#endif
#endif
#endif
#else
#if (COMMAND)&16
#if (COMMAND)&32
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 245
#define PTR 245
#else
#undef PTR
#define PTRL 117
#define PTR 117
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 181
#define PTR 181
#else
#undef PTR
#define PTRL 53
#define PTR 53
#endif
#endif
#else
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 213
#define PTR 213
#else
#undef PTR
#define PTRL 85
#define PTR 85
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 149
#define PTR 149
#else
#undef PTR
#define PTRL 21
#define PTR 21
#endif
#endif
#endif
#else
#if (COMMAND)&32
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 229
#define PTR 229
#else
#undef PTR
#define PTRL 101
#define PTR 101
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 165
#define PTR 165
#else
#undef PTR
#define PTRL 37
#define PTR 37
#endif
#endif
#else
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 197
#define PTR 197
#else
#undef PTR
#define PTRL 69
#define PTR 69
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 133
#define PTR 133
#else
#undef PTR
#define PTRL 5
#define PTR 5
#endif
#endif
#endif
#endif
#endif
#else
#if (COMMAND)&8
#if (COMMAND)&16
#if (COMMAND)&32
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 249
#define PTR 249
#else
#undef PTR
#define PTRL 121
#define PTR 121
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 185
#define PTR 185
#else
#undef PTR
#define PTRL 57
#define PTR 57
#endif
#endif
#else
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 217
#define PTR 217
#else
#undef PTR
#define PTRL 89
#define PTR 89
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 153
#define PTR 153
#else
#undef PTR
#define PTRL 25
#define PTR 25
#endif
#endif
#endif
#else
#if (COMMAND)&32
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 233
#define PTR 233
#else
#undef PTR
#define PTRL 105
#define PTR 105
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 169
#define PTR 169
#else
#undef PTR
#define PTRL 41
#define PTR 41
#endif
#endif
#else
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 201
#define PTR 201
#else
#undef PTR
#define PTRL 73
#define PTR 73
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 137
#define PTR 137
#else
#undef PTR
#define PTRL 9
#define PTR 9
#endif
#endif
#endif
#endif
#else
#if (COMMAND)&16
#if (COMMAND)&32
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 241
#define PTR 241
#else
#undef PTR
#define PTRL 113
#define PTR 113
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 177
#define PTR 177
#else
#undef PTR
#define PTRL 49
#define PTR 49
#endif
#endif
#else
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 209
#define PTR 209
#else
#undef PTR
#define PTRL 81
#define PTR 81
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 145
#define PTR 145
#else
#undef PTR
#define PTRL 17
#define PTR 17
#endif
#endif
#endif
#else
#if (COMMAND)&32
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 225
#define PTR 225
#else
#undef PTR
#define PTRL 97
#define PTR 97
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 161
#define PTR 161
#else
#undef PTR
#define PTRL 33
#define PTR 33
#endif
#endif
#else
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 193
#define PTR 193
#else
#undef PTR
#define PTRL 65
#define PTR 65
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 129
#define PTR 129
#else
#undef PTR
#define PTRL 1
#define PTR 1
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#else
#if (COMMAND)&2
#if (COMMAND)&4
#if (COMMAND)&8
#if (COMMAND)&16
#if (COMMAND)&32
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 254
#define PTR 254
#else
#undef PTR
#define PTRL 126
#define PTR 126
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 190
#define PTR 190
#else
#undef PTR
#define PTRL 62
#define PTR 62
#endif
#endif
#else
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 222
#define PTR 222
#else
#undef PTR
#define PTRL 94
#define PTR 94
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 158
#define PTR 158
#else
#undef PTR
#define PTRL 30
#define PTR 30
#endif
#endif
#endif
#else
#if (COMMAND)&32
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 238
#define PTR 238
#else
#undef PTR
#define PTRL 110
#define PTR 110
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 174
#define PTR 174
#else
#undef PTR
#define PTRL 46
#define PTR 46
#endif
#endif
#else
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 206
#define PTR 206
#else
#undef PTR
#define PTRL 78
#define PTR 78
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 142
#define PTR 142
#else
#undef PTR
#define PTRL 14
#define PTR 14
#endif
#endif
#endif
#endif
#else
#if (COMMAND)&16
#if (COMMAND)&32
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 246
#define PTR 246
#else
#undef PTR
#define PTRL 118
#define PTR 118
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 182
#define PTR 182
#else
#undef PTR
#define PTRL 54
#define PTR 54
#endif
#endif
#else
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 214
#define PTR 214
#else
#undef PTR
#define PTRL 86
#define PTR 86
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 150
#define PTR 150
#else
#undef PTR
#define PTRL 22
#define PTR 22
#endif
#endif
#endif
#else
#if (COMMAND)&32
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 230
#define PTR 230
#else
#undef PTR
#define PTRL 102
#define PTR 102
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 166
#define PTR 166
#else
#undef PTR
#define PTRL 38
#define PTR 38
#endif
#endif
#else
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 198
#define PTR 198
#else
#undef PTR
#define PTRL 70
#define PTR 70
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 134
#define PTR 134
#else
#undef PTR
#define PTRL 6
#define PTR 6
#endif
#endif
#endif
#endif
#endif
#else
#if (COMMAND)&8
#if (COMMAND)&16
#if (COMMAND)&32
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 250
#define PTR 250
#else
#undef PTR
#define PTRL 122
#define PTR 122
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 186
#define PTR 186
#else
#undef PTR
#define PTRL 58
#define PTR 58
#endif
#endif
#else
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 218
#define PTR 218
#else
#undef PTR
#define PTRL 90
#define PTR 90
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 154
#define PTR 154
#else
#undef PTR
#define PTRL 26
#define PTR 26
#endif
#endif
#endif
#else
#if (COMMAND)&32
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 234
#define PTR 234
#else
#undef PTR
#define PTRL 106
#define PTR 106
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 170
#define PTR 170
#else
#undef PTR
#define PTRL 42
#define PTR 42
#endif
#endif
#else
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 202
#define PTR 202
#else
#undef PTR
#define PTRL 74
#define PTR 74
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 138
#define PTR 138
#else
#undef PTR
#define PTRL 10
#define PTR 10
#endif
#endif
#endif
#endif
#else
#if (COMMAND)&16
#if (COMMAND)&32
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 242
#define PTR 242
#else
#undef PTR
#define PTRL 114
#define PTR 114
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 178
#define PTR 178
#else
#undef PTR
#define PTRL 50
#define PTR 50
#endif
#endif
#else
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 210
#define PTR 210
#else
#undef PTR
#define PTRL 82
#define PTR 82
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 146
#define PTR 146
#else
#undef PTR
#define PTRL 18
#define PTR 18
#endif
#endif
#endif
#else
#if (COMMAND)&32
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 226
#define PTR 226
#else
#undef PTR
#define PTRL 98
#define PTR 98
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 162
#define PTR 162
#else
#undef PTR
#define PTRL 34
#define PTR 34
#endif
#endif
#else
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 194
#define PTR 194
#else
#undef PTR
#define PTRL 66
#define PTR 66
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 130
#define PTR 130
#else
#undef PTR
#define PTRL 2
#define PTR 2
#endif
#endif
#endif
#endif
#endif
#endif
#else
#if (COMMAND)&4
#if (COMMAND)&8
#if (COMMAND)&16
#if (COMMAND)&32
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 252
#define PTR 252
#else
#undef PTR
#define PTRL 124
#define PTR 124
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 188
#define PTR 188
#else
#undef PTR
#define PTRL 60
#define PTR 60
#endif
#endif
#else
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 220
#define PTR 220
#else
#undef PTR
#define PTRL 92
#define PTR 92
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 156
#define PTR 156
#else
#undef PTR
#define PTRL 28
#define PTR 28
#endif
#endif
#endif
#else
#if (COMMAND)&32
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 236
#define PTR 236
#else
#undef PTR
#define PTRL 108
#define PTR 108
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 172
#define PTR 172
#else
#undef PTR
#define PTRL 44
#define PTR 44
#endif
#endif
#else
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 204
#define PTR 204
#else
#undef PTR
#define PTRL 76
#define PTR 76
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 140
#define PTR 140
#else
#undef PTR
#define PTRL 12
#define PTR 12
#endif
#endif
#endif
#endif
#else
#if (COMMAND)&16
#if (COMMAND)&32
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 244
#define PTR 244
#else
#undef PTR
#define PTRL 116
#define PTR 116
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 180
#define PTR 180
#else
#undef PTR
#define PTRL 52
#define PTR 52
#endif
#endif
#else
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 212
#define PTR 212
#else
#undef PTR
#define PTRL 84
#define PTR 84
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 148
#define PTR 148
#else
#undef PTR
#define PTRL 20
#define PTR 20
#endif
#endif
#endif
#else
#if (COMMAND)&32
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 228
#define PTR 228
#else
#undef PTR
#define PTRL 100
#define PTR 100
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 164
#define PTR 164
#else
#undef PTR
#define PTRL 36
#define PTR 36
#endif
#endif
#else
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 196
#define PTR 196
#else
#undef PTR
#define PTRL 68
#define PTR 68
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 132
#define PTR 132
#else
#undef PTR
#define PTRL 4
#define PTR 4
#endif
#endif
#endif
#endif
#endif
#else
#if (COMMAND)&8
#if (COMMAND)&16
#if (COMMAND)&32
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 248
#define PTR 248
#else
#undef PTR
#define PTRL 120
#define PTR 120
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 184
#define PTR 184
#else
#undef PTR
#define PTRL 56
#define PTR 56
#endif
#endif
#else
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 216
#define PTR 216
#else
#undef PTR
#define PTRL 88
#define PTR 88
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 152
#define PTR 152
#else
#undef PTR
#define PTRL 24
#define PTR 24
#endif
#endif
#endif
#else
#if (COMMAND)&32
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 232
#define PTR 232
#else
#undef PTR
#define PTRL 104
#define PTR 104
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 168
#define PTR 168
#else
#undef PTR
#define PTRL 40
#define PTR 40
#endif
#endif
#else
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 200
#define PTR 200
#else
#undef PTR
#define PTRL 72
#define PTR 72
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 136
#define PTR 136
#else
#undef PTR
#define PTRL 8
#define PTR 8
#endif
#endif
#endif
#endif
#else
#if (COMMAND)&16
#if (COMMAND)&32
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 240
#define PTR 240
#else
#undef PTR
#define PTRL 112
#define PTR 112
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 176
#define PTR 176
#else
#undef PTR
#define PTRL 48
#define PTR 48
#endif
#endif
#else
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 208
#define PTR 208
#else
#undef PTR
#define PTRL 80
#define PTR 80
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 144
#define PTR 144
#else
#undef PTR
#define PTRL 16
#define PTR 16
#endif
#endif
#endif
#else
#if (COMMAND)&32
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 224
#define PTR 224
#else
#undef PTR
#define PTRL 96
#define PTR 96
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 160
#define PTR 160
#else
#undef PTR
#define PTRL 32
#define PTR 32
#endif
#endif
#else
#if (COMMAND)&64
#if (COMMAND)&128
#undef PTR
#define PTRL 192
#define PTR 192
#else
#undef PTR
#define PTRL 64
#define PTR 64
#endif
#else
#if (COMMAND)&128
#undef PTR
#define PTRL 128
#define PTR 128
#else
#undef PTR
#define PTRL 0
#define PTR 0
#endif
#endif
#endif
#endif
#endif
#endif
#endif
#endif
