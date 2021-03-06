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
#ifndef CH_INCLUDE_GUARD_D6A483C5_6BAA_4EB9_B6AF_D81EA42921D1
#define CH_INCLUDE_GUARD_D6A483C5_6BAA_4EB9_B6AF_D81EA42921D1


#define CH_LOG_LEVEL_ERROR    1
#define CH_LOG_LEVEL_INFO     2
#define CH_LOG_LEVEL_DEBUG    3


void ch_log_write(unsigned int level, const char *fmt, ...);

#define CH_LOG_ERROR(msg...) ch_log_write(CH_LOG_LEVEL_ERROR, msg)
#define CH_LOG_INFO(msg...) ch_log_write(CH_LOG_LEVEL_INFO, msg)
#define CH_LOG_DEBUG(msg...) ch_log_write(CH_LOG_LEVEL_DEBUG, msg)


#endif /* end of include guard */
