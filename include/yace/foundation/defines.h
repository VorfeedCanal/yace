/*
 * Permission is hereby granted, free of charge, to any human obtaining a copy of this software and associated documentation files
 * (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify,
 * merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit humans to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 * LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */
#ifndef 𝔜𝔄ℭ𝔈_𝔉𝔒𝔘𝔑𝔇𝔄𝔗ℑ𝔒𝔑_𝔇𝔈𝔉ℑ𝔑𝔈𝔖_ℌ
#define 𝔜𝔄ℭ𝔈_𝔉𝔒𝔘𝔑𝔇𝔄𝔗ℑ𝔒𝔑_𝔇𝔈𝔉ℑ𝔑𝔈𝔖_ℌ

#if __has_cpp_attribute(gnu::always_inline)
#define 𝖞𝖆𝖈𝖊_𝖋𝖔𝖗𝖈𝖊𝖎𝖓𝖑𝖎𝖓𝖊 [[gnu::always_inline]] inline
#elif defined(_MSC_VER)
#define 𝖞𝖆𝖈𝖊_𝖋𝖔𝖗𝖈𝖊𝖎𝖓𝖑𝖎𝖓𝖊 __forceinline
#else
#define 𝖞𝖆𝖈𝖊_𝖋𝖔𝖗𝖈𝖊𝖎𝖓𝖑𝖎𝖓𝖊 inline
#endif

#ifdef __cpp_constexpr_dynamic_alloc
#define 𝖞𝖆𝖈𝖊_𝖈𝖔𝖓𝖘𝖙𝖊𝖝𝖕𝖗_𝖋𝖔𝖗_𝖉𝖊𝖘𝖙𝖗𝖚𝖈𝖙𝖔𝖗 constexpr
#else
#define 𝖞𝖆𝖈𝖊_𝖈𝖔𝖓𝖘𝖙𝖊𝖝𝖕𝖗_𝖋𝖔𝖗_𝖉𝖊𝖘𝖙𝖗𝖚𝖈𝖙𝖔𝖗
#endif

#if __has_cpp_attribute(likely)
#define 𝖞𝖆𝖈𝖊_𝖑𝖎𝖐𝖊𝖑𝖞 [[likely]]
#else
#define 𝖞𝖆𝖈𝖊_𝖑𝖎𝖐𝖊𝖑𝖞
#endif

#if __has_cpp_attribute(unlikely)
#define 𝖞𝖆𝖈𝖊_𝖚𝖓𝖑𝖎𝖐𝖊𝖑𝖞 [[unlikely]]
#else
#define 𝖞𝖆𝖈𝖊_𝖚𝖓𝖑𝖎𝖐𝖊𝖑𝖞
#endif

#if __has_cpp_attribute(no_unique_address)
#define 𝖞𝖆𝖈𝖊_𝖓𝖔_𝖚𝖓𝖎𝖖𝖚𝖊_𝖆𝖉𝖉𝖗𝖊𝖘𝖘 [[no_unique_address]]
#else
#define 𝖞𝖆𝖈𝖊_𝖓𝖔_𝖚𝖓𝖎𝖖𝖚𝖊_𝖆𝖉𝖉𝖗𝖊𝖘𝖘
#endif

#if __has_cpp_attribute(clang::require_constant_initialization)
#define 𝖞𝖆𝖈𝖊_𝖈𝖔𝖓𝖘𝖙_𝖎𝖓𝖎𝖙 [[clang::require_constant_initialization]]
#else
#define 𝖞𝖆𝖈𝖊_𝖈𝖔𝖓𝖘𝖙_𝖎𝖓𝖎𝖙
#endif

#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊_𝖈𝖔𝖗𝖊(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, (), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘((), (), __VA_ARGS__))
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊_𝖘𝖊𝖖𝖚𝖊𝖓𝖈𝖊(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊_𝖈𝖔𝖗𝖊(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, (;), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘((), (), __VA_ARGS__))
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊_𝖑𝖎𝖘𝖙(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊_𝖈𝖔𝖗𝖊(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, (, ), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘((), (), __VA_ARGS__))
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊_𝖗𝖆𝖜(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊_𝖈𝖔𝖗𝖊(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, (), __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊_𝖗𝖆𝖜_𝖘𝖊𝖖𝖚𝖊𝖓𝖈𝖊(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊_𝖈𝖔𝖗𝖊(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, (;), __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊_𝖗𝖆𝖜_𝖑𝖎𝖘𝖙(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊_𝖈𝖔𝖗𝖊(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, (, ), __VA_ARGS__)
// clang-format off
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ...) \
  𝖞𝖆𝖈𝖊_𝖘𝖊𝖑𝖊𝖈𝖙(__VA_ARGS__, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₆₃, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₆₂, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₆₁, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₆₀, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₅₉, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₅₈, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₅₇, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₅₆, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₅₅, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₅₄, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₅₃, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₅₂, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₅₁, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₅₀, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₄₉, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₄₈, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₄₇, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₄₆, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₄₅, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₄₄, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₄₃, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₄₂, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₄₁, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₄₀, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₃₉, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₃₈, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₃₇, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₃₆, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₃₅, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₃₄, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₃₃, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₃₂, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₃₁, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₃₀, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₉, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₈, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₇, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₆, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₅, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₄, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₃, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₂, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₁, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₀, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₉, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₈, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₇, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₆, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₅, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₄, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₃, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₂, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₁, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₀, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₉, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₈, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₇, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₆, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₅, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₄, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₃, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂, 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁, 𝔶𝔞𝔠𝔢_𝔡𝔲𝔪𝔪𝔶) \
  (𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊_𝖈𝖔𝖗𝖊(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ...) \
  𝖞𝖆𝖈𝖊_𝖘𝖊𝖑𝖊𝖈𝖙(__VA_ARGS__, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₆₃, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₆₂, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₆₁, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₆₀, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₅₉, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₅₈, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₅₇, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₅₆, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₅₅, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₅₄, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₅₃, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₅₂, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₅₁, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₅₀, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₄₉, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₄₈, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₄₇, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₄₆, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₄₅, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₄₄, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₄₃, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₄₂, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₄₁, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₄₀, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₃₉, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₃₈, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₃₇, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₃₆, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₃₅, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₃₄, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₃₃, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₃₂, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₃₁, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₃₀, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₉, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₈, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₇, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₆, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₅, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₄, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₃, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₂, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₁, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₀, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₉, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₈, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₇, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₆, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₅, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₄, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₃, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₂, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₁, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₀, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₉, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₈, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₇, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₆, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₅, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₄, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₃, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂, 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁, 𝔶𝔞𝔠𝔢_𝔡𝔲𝔪𝔪𝔶) \
  (𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖘𝖊𝖑𝖊𝖈𝖙(₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯, 𝔰, 𝔱, 𝔲, 𝔳, 𝔴, 𝔵, 𝔶, 𝔷, 𝓐, 𝓑, 𝓒, 𝓓, 𝓔, 𝓕, 𝓖, 𝓗, 𝓘, 𝓙, 𝓚, 𝓛, 𝓜, 𝓝, 𝓞, 𝓟, 𝓠, 𝓡, 𝓢, 𝓣, 𝓤, 𝓥, 𝓦, 𝓧, 𝓨, 𝓩, 𝔄, ℨ, 𝔂𝓪𝓬𝓮_𝓭𝓮𝓯𝓲𝓷𝓮, ...) 𝔂𝓪𝓬𝓮_𝓭𝓮𝓯𝓲𝓷𝓮
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁) (𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓫𝓮𝓯𝓸𝓻𝓮 ₁ 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓪𝓯𝓽𝓮𝓻)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂) (𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓫𝓮𝓯𝓸𝓻𝓮 ₁ 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓪𝓯𝓽𝓮𝓻), (𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓫𝓮𝓯𝓸𝓻𝓮 ₂ 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓪𝓯𝓽𝓮𝓻)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₃(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃) (𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓫𝓮𝓯𝓸𝓻𝓮 ₁ 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓪𝓯𝓽𝓮𝓻), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₂, ₃)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₄(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₃, ₄)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₅(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₃(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₃, ₄, ₅)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₆(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₃(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₃(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₄, ₅, ₆)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₇(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₃(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₄(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₈(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₄(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₄(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₉(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₄(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₅(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₀(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₅(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₅(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₁(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₅(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₆(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₂(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₆(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₆(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₃(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₆(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₇(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₄(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₇(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₇(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₅(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₇(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₈(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₆(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₈(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₈(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₇(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₈(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₉(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₈(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₉(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₉(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₉(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₉(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₀(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₀(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₀(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₀(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₁(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₀(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₁(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₂(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₁(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₁(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₃(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₁(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₂(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₄(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₂(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₂(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₅(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₂(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₃(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₆(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₃(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₃(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₇(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₃(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₄(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₈(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₄(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₄(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₉(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₄(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₅(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₃₀(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₅(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₅(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₃₁(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₅(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₆(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₃₂(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₆(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₆(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₃₃(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₆(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₇(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₃₄(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₇(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₇(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₃₅(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₇(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₈(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₃₆(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₈(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₈(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₃₇(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₈(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₉(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₃₈(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₉(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₉(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₃₉(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₁₉(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₀(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₄₀(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₀(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₀(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₄₁(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₀(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₁(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₄₂(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₁(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₁(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₄₃(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₁(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₂(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₄₄(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₂(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₂(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₄₅(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₂(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₃(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₄₆(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₃(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₃(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₄₇(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₃(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₄(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₄₈(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₄(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₄(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₄₉(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₄(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₅(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₅₀(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₅(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₅(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₅₁(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₅(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₆(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₅₂(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₆(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₆(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₅₃(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₆(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₇(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₅₄(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₇(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₇(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₅₅(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₇(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₈(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₅₆(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯, 𝔰, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₈(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯, 𝔰), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₈(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₅₇(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯, 𝔰, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₈(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯, 𝔰), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₉(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₅₈(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯, 𝔰, 𝔱, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₉(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯, 𝔰, 𝔱), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₉(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₅₉(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯, 𝔰, 𝔱, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₂₉(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯, 𝔰, 𝔱), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₃₀(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₆₀(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯, 𝔰, 𝔱, 𝔲, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₃₀(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯, 𝔰, 𝔱, 𝔲), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₃₀(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₆₁(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯, 𝔰, 𝔱, 𝔲, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₃₀(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯, 𝔰, 𝔱, 𝔲), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₃₁(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₆₂(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯, 𝔰, 𝔱, 𝔲, 𝔳, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₃₁(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯, 𝔰, 𝔱, 𝔲, 𝔳), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₃₁(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₆₃(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯, 𝔰, 𝔱, 𝔲, 𝔳, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₃₁(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯, 𝔰, 𝔱, 𝔲, 𝔳), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₃₂(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₆₄(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯, 𝔰, 𝔱, 𝔲, 𝔳, 𝔴, ...) 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₃₂(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯, 𝔰, 𝔱, 𝔲, 𝔳, 𝔴), 𝖞𝖆𝖈𝖊_𝖕𝖆𝖗𝖊𝖓𝖘₃₂(𝓫𝓮𝓯𝓸𝓻𝓮, 𝓪𝓯𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁) 𝓭𝓮𝓯𝓲𝓷𝓮𝓻 ₁
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂) 𝓭𝓮𝓯𝓲𝓷𝓮𝓻 ₁ 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝓭𝓮𝓯𝓲𝓷𝓮𝓻 ₂
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₃(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃) 𝓭𝓮𝓯𝓲𝓷𝓮𝓻 ₁ 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₂, ₃)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₄(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₃, ₄)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₅(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₃(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₃, ₄, ₅)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₆(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₃(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₃(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₄, ₅, ₆)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₇(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₃(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₄(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₈(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₄(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₄(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₉(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₄(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₅(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₀(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₅(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₅(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₁(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₅(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₆(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₂(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₆(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₆(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₃(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₆(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₇(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₄(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₇(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₇(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₅(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₇(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₈(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₆(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₈(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₈(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₇(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₈(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₉(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₈(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₉(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₉(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₉(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₉(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₀(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₀(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₀(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₀(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₁(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₀(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₁(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₂(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₁(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₁(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₃(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₁(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₂(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₄(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₂(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₂(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₅(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₂(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₃(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₆(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₃(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₃(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₇(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₃(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₄(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₈(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₄(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₄(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₉(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₄(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₅(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₃₀(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₅(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₅(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₃₁(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₅(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₆(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₃₂(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₆(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₆(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₃₃(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₆(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₇(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₃₄(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₇(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₇(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₃₅(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₇(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₈(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₃₆(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₈(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₈(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₃₇(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₈(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₉(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₃₈(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₉(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₉(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₃₉(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₁₉(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₀(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₄₀(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₀(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₀(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₄₁(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₀(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₁(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₄₂(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₁(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₁(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₄₃(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₁(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₂(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₄₄(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₂(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₂(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₄₅(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₂(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₃(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₄₆(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₃(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₃(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₄₇(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₃(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₄(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₄₈(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₄(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₄(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₄₉(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₄(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₅(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₅₀(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₅(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₅(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₅₁(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₅(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₆(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₅₂(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₆(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₆(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₅₃(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₆(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₇(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₅₄(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₇(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₇(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₅₅(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₇(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₈(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₅₆(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯, 𝔰, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₈(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯, 𝔰) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₈(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₅₇(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯, 𝔰, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₈(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯, 𝔰) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₉(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₅₈(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯, 𝔰, 𝔱, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₉(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯, 𝔰, 𝔱) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₉(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₅₉(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯, 𝔰, 𝔱, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₂₉(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯, 𝔰, 𝔱) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₃₀(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₆₀(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯, 𝔰, 𝔱, 𝔲, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₃₀(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯, 𝔰, 𝔱, 𝔲) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₃₀(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₆₁(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯, 𝔰, 𝔱, 𝔲, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₃₀(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯, 𝔰, 𝔱, 𝔲) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₃₁(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₆₂(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯, 𝔰, 𝔱, 𝔲, 𝔳, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₃₁(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯, 𝔰, 𝔱, 𝔲, 𝔳) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₃₁(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₆₃(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯, 𝔰, 𝔱, 𝔲, 𝔳, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₃₁(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯, 𝔰, 𝔱, 𝔲, 𝔳) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₃₂(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₆₄(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯, 𝔰, 𝔱, 𝔲, 𝔳, 𝔴, ...) 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₃₂(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, ₁, ₂, ₃, ₄, ₅, ₆, ₇, ₈, ₉, 𝓪, 𝓫, 𝓬, 𝓭, 𝓮, 𝓯, 𝓰, 𝓱, 𝓲, 𝓳, 𝓴, 𝔩, 𝔪, 𝔫, 𝔬, 𝔭, 𝔮, 𝔯, 𝔰, 𝔱, 𝔲, 𝔳, 𝔴) 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻 𝖞𝖆𝖈𝖊_𝖉𝖊𝖋𝖎𝖓𝖊₃₂(𝓭𝓮𝓯𝓲𝓷𝓮𝓻, 𝓭𝓮𝓵𝓲𝓶𝓮𝓽𝓮𝓻, __VA_ARGS__)
#define 𝖞𝖆𝖈𝖊_𝖉𝖎𝖘𝖈𝖆𝖗𝖉(...)
#define 𝖞𝖆𝖈𝖊_𝖚𝖓𝖇𝖗𝖆𝖈𝖊(...) __VA_ARGS__
#define 𝖞𝖆𝖈𝖊_𝖚𝟴(𝔁) u8"" #𝔁
// clang-format on

#endif  // 𝔜𝔄ℭ𝔈_𝔉𝔒𝔘𝔑𝔇𝔄𝔗ℑ𝔒𝔑_𝔇𝔈𝔉ℑ𝔑𝔈𝔖_ℌ