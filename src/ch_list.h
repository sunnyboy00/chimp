/**
 * Copyright (C) 2013 Tadas Vilkeliskis <vilkeliskis.t@gmail.com>
 *
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is furnished to do
 * so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
#ifndef INCLUDE_GUARD_9FE9D177_906E_49B7_ABCB_BD41D1B18A9C
#define INCLUDE_GUARD_9FE9D177_906E_49B7_ABCB_BD41D1B18A9C


typedef struct ch_node_ {
    struct ch_node_ *prev;
    struct ch_node_ *next;
    void *data;
} ch_node_t;


typedef struct ch_list_ {
    ch_node_t *head;
    ch_node_t *tail;
} ch_list_t;


void ch_list_init_empty(ch_list_t *list);
void ch_list_init(ch_list_t *list, void *data);
void ch_list_append(ch_list_t *list, void *data);
void ch_list_free(ch_list_t *list);


#endif /* end of include guard */
