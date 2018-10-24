/*
 * MIT License
 *
 * Copyright (c) 2018 8devices
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
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

#ifndef HTTP_FRAMEWORK_H
#define HTTP_FRAMEWORK_H

#ifdef __cplusplus
extern "C" {
#endif

#include "request.h"
#include "response.h"

typedef CStatusCode (*c_callback_function_t)(CRequest *, CResponse *, void*);

struct CHttpFramework;
typedef struct CHttpFramework CHttpFramework;

void HttpFramework_addHandler(CHttpFramework *c_http_framework,
                              const char *method,
                              const char *url_prefix,
                              const unsigned int priority,
                              c_callback_function_t c_handler_function,
                              void *handler_context);

#ifdef __cplusplus
}
#endif

#endif // HTTP_FRAMEWORK_H