#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000B System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::TakeIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000D System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000E System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderByDescending(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000F System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000010 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000012 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Union(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::UnionIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000014 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Intersect(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::IntersectIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000016 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000018 System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>)
// 0x00000019 System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x0000001A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfType(System.Collections.IEnumerable)
// 0x0000001B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfTypeIterator(System.Collections.IEnumerable)
// 0x0000001C TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001D TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001E TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001F TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000020 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000021 TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x00000022 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x00000023 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000024 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000025 System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000026 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000027 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000028 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000029 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000002A TAccumulate System.Linq.Enumerable::Aggregate(System.Collections.Generic.IEnumerable`1<TSource>,TAccumulate,System.Func`3<TAccumulate,TSource,TAccumulate>)
// 0x0000002B System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5 (void);
// 0x0000002C System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000002D TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000002E System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000002F System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000030 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000031 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000032 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000033 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000034 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000035 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000036 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000037 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000038 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000039 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x0000003A System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x0000003B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003D System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000003E System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000003F System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000040 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000041 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000042 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000043 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000044 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000045 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000046 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000047 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000048 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000049 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x0000004A System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x0000004B System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004D System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004E System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000004F System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000050 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000051 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000052 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000053 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000054 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000055 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000056 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000057 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000058 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000059 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x0000005A TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x0000005B System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x0000005C System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x0000005D System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x0000005E System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x0000005F System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x00000060 TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000061 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000062 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000063 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000064 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000065 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::.ctor(System.Int32)
// 0x00000066 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.IDisposable.Dispose()
// 0x00000067 System.Boolean System.Linq.Enumerable/<TakeIterator>d__25`1::MoveNext()
// 0x00000068 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::<>m__Finally1()
// 0x00000069 TSource System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000006A System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.Reset()
// 0x0000006B System.Object System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.get_Current()
// 0x0000006C System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000006D System.Collections.IEnumerator System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006E System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x0000006F System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x00000070 System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x00000071 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x00000072 TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000073 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x00000074 System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x00000075 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000076 System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000077 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::.ctor(System.Int32)
// 0x00000078 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.IDisposable.Dispose()
// 0x00000079 System.Boolean System.Linq.Enumerable/<UnionIterator>d__71`1::MoveNext()
// 0x0000007A System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally1()
// 0x0000007B System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally2()
// 0x0000007C TSource System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000007D System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.Reset()
// 0x0000007E System.Object System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.get_Current()
// 0x0000007F System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000080 System.Collections.IEnumerator System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000081 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::.ctor(System.Int32)
// 0x00000082 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.IDisposable.Dispose()
// 0x00000083 System.Boolean System.Linq.Enumerable/<IntersectIterator>d__74`1::MoveNext()
// 0x00000084 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::<>m__Finally1()
// 0x00000085 TSource System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000086 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.Reset()
// 0x00000087 System.Object System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.get_Current()
// 0x00000088 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000089 System.Collections.IEnumerator System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000008A System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::.ctor(System.Int32)
// 0x0000008B System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.IDisposable.Dispose()
// 0x0000008C System.Boolean System.Linq.Enumerable/<OfTypeIterator>d__97`1::MoveNext()
// 0x0000008D System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::<>m__Finally1()
// 0x0000008E TResult System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000008F System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.Reset()
// 0x00000090 System.Object System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.get_Current()
// 0x00000091 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000092 System.Collections.IEnumerator System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000093 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000094 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000095 System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000096 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x00000097 System.Boolean System.Linq.Set`1::Remove(TElement)
// 0x00000098 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x00000099 System.Void System.Linq.Set`1::Resize()
// 0x0000009A System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x0000009B System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x0000009C System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000009D System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000009E System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000009F System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x000000A0 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x000000A1 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x000000A2 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x000000A3 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x000000A4 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x000000A5 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x000000A6 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x000000A7 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x000000A8 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x000000A9 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x000000AA System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x000000AB System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x000000AC System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x000000AD System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x000000AE System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x000000AF System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x000000B0 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x000000B1 TElement[] System.Linq.Buffer`1::ToArray()
// 0x000000B2 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x000000B3 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000B4 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000B5 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x000000B6 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x000000B7 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x000000B8 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x000000B9 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x000000BA System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x000000BB System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000000BC System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x000000BD System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000BE System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000BF System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000C0 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000C1 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000C2 System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000C3 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000C4 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000C5 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000C6 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000C7 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000C8 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000C9 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000CA System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000CB System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000CC System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000CD T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000CE System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000CF System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[207] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[207] = 
{
	7069,
	7069,
	7312,
	7312,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	6963,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[70] = 
{
	{ 0x02000004, { 110, 4 } },
	{ 0x02000005, { 114, 9 } },
	{ 0x02000006, { 125, 7 } },
	{ 0x02000007, { 134, 10 } },
	{ 0x02000008, { 146, 11 } },
	{ 0x02000009, { 160, 9 } },
	{ 0x0200000A, { 172, 12 } },
	{ 0x0200000B, { 187, 1 } },
	{ 0x0200000C, { 188, 2 } },
	{ 0x0200000D, { 190, 12 } },
	{ 0x0200000E, { 202, 8 } },
	{ 0x0200000F, { 210, 11 } },
	{ 0x02000010, { 221, 12 } },
	{ 0x02000011, { 233, 12 } },
	{ 0x02000012, { 245, 6 } },
	{ 0x02000013, { 251, 2 } },
	{ 0x02000015, { 253, 8 } },
	{ 0x02000017, { 261, 3 } },
	{ 0x02000018, { 266, 5 } },
	{ 0x02000019, { 271, 7 } },
	{ 0x0200001A, { 278, 3 } },
	{ 0x0200001B, { 281, 7 } },
	{ 0x0200001C, { 288, 4 } },
	{ 0x0200001D, { 292, 23 } },
	{ 0x0200001F, { 315, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 1 } },
	{ 0x0600000A, { 31, 2 } },
	{ 0x0600000B, { 33, 1 } },
	{ 0x0600000C, { 34, 2 } },
	{ 0x0600000D, { 36, 2 } },
	{ 0x0600000E, { 38, 2 } },
	{ 0x0600000F, { 40, 1 } },
	{ 0x06000010, { 41, 1 } },
	{ 0x06000011, { 42, 2 } },
	{ 0x06000012, { 44, 1 } },
	{ 0x06000013, { 45, 2 } },
	{ 0x06000014, { 47, 1 } },
	{ 0x06000015, { 48, 2 } },
	{ 0x06000016, { 50, 3 } },
	{ 0x06000017, { 53, 2 } },
	{ 0x06000018, { 55, 1 } },
	{ 0x06000019, { 56, 7 } },
	{ 0x0600001A, { 63, 1 } },
	{ 0x0600001B, { 64, 2 } },
	{ 0x0600001C, { 66, 4 } },
	{ 0x0600001D, { 70, 4 } },
	{ 0x0600001E, { 74, 3 } },
	{ 0x0600001F, { 77, 4 } },
	{ 0x06000020, { 81, 3 } },
	{ 0x06000021, { 84, 3 } },
	{ 0x06000022, { 87, 1 } },
	{ 0x06000023, { 88, 1 } },
	{ 0x06000024, { 89, 3 } },
	{ 0x06000025, { 92, 3 } },
	{ 0x06000026, { 95, 2 } },
	{ 0x06000027, { 97, 3 } },
	{ 0x06000028, { 100, 2 } },
	{ 0x06000029, { 102, 5 } },
	{ 0x0600002A, { 107, 3 } },
	{ 0x0600003B, { 123, 2 } },
	{ 0x06000040, { 132, 2 } },
	{ 0x06000045, { 144, 2 } },
	{ 0x0600004B, { 157, 3 } },
	{ 0x06000050, { 169, 3 } },
	{ 0x06000055, { 184, 3 } },
	{ 0x0600009E, { 264, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[317] = 
{
	{ (Il2CppRGCTXDataType)2, 7278 },
	{ (Il2CppRGCTXDataType)3, 27263 },
	{ (Il2CppRGCTXDataType)2, 11603 },
	{ (Il2CppRGCTXDataType)2, 10795 },
	{ (Il2CppRGCTXDataType)3, 47471 },
	{ (Il2CppRGCTXDataType)2, 8006 },
	{ (Il2CppRGCTXDataType)2, 10829 },
	{ (Il2CppRGCTXDataType)3, 47515 },
	{ (Il2CppRGCTXDataType)2, 10809 },
	{ (Il2CppRGCTXDataType)3, 47487 },
	{ (Il2CppRGCTXDataType)2, 7279 },
	{ (Il2CppRGCTXDataType)3, 27264 },
	{ (Il2CppRGCTXDataType)2, 11635 },
	{ (Il2CppRGCTXDataType)2, 10843 },
	{ (Il2CppRGCTXDataType)3, 47531 },
	{ (Il2CppRGCTXDataType)2, 8034 },
	{ (Il2CppRGCTXDataType)2, 10875 },
	{ (Il2CppRGCTXDataType)3, 47673 },
	{ (Il2CppRGCTXDataType)2, 10859 },
	{ (Il2CppRGCTXDataType)3, 47596 },
	{ (Il2CppRGCTXDataType)2, 1300 },
	{ (Il2CppRGCTXDataType)3, 198 },
	{ (Il2CppRGCTXDataType)3, 199 },
	{ (Il2CppRGCTXDataType)2, 4183 },
	{ (Il2CppRGCTXDataType)3, 17162 },
	{ (Il2CppRGCTXDataType)2, 1301 },
	{ (Il2CppRGCTXDataType)3, 208 },
	{ (Il2CppRGCTXDataType)3, 209 },
	{ (Il2CppRGCTXDataType)2, 4204 },
	{ (Il2CppRGCTXDataType)3, 17173 },
	{ (Il2CppRGCTXDataType)3, 53016 },
	{ (Il2CppRGCTXDataType)2, 1342 },
	{ (Il2CppRGCTXDataType)3, 385 },
	{ (Il2CppRGCTXDataType)3, 53022 },
	{ (Il2CppRGCTXDataType)2, 1351 },
	{ (Il2CppRGCTXDataType)3, 421 },
	{ (Il2CppRGCTXDataType)2, 8778 },
	{ (Il2CppRGCTXDataType)3, 37457 },
	{ (Il2CppRGCTXDataType)2, 8779 },
	{ (Il2CppRGCTXDataType)3, 37458 },
	{ (Il2CppRGCTXDataType)3, 22493 },
	{ (Il2CppRGCTXDataType)3, 52943 },
	{ (Il2CppRGCTXDataType)2, 1304 },
	{ (Il2CppRGCTXDataType)3, 251 },
	{ (Il2CppRGCTXDataType)3, 53068 },
	{ (Il2CppRGCTXDataType)2, 1354 },
	{ (Il2CppRGCTXDataType)3, 444 },
	{ (Il2CppRGCTXDataType)3, 52965 },
	{ (Il2CppRGCTXDataType)2, 1331 },
	{ (Il2CppRGCTXDataType)3, 343 },
	{ (Il2CppRGCTXDataType)2, 1704 },
	{ (Il2CppRGCTXDataType)3, 3242 },
	{ (Il2CppRGCTXDataType)3, 3243 },
	{ (Il2CppRGCTXDataType)2, 8007 },
	{ (Il2CppRGCTXDataType)3, 29453 },
	{ (Il2CppRGCTXDataType)3, 53052 },
	{ (Il2CppRGCTXDataType)2, 2607 },
	{ (Il2CppRGCTXDataType)3, 7635 },
	{ (Il2CppRGCTXDataType)2, 4797 },
	{ (Il2CppRGCTXDataType)2, 5113 },
	{ (Il2CppRGCTXDataType)3, 17171 },
	{ (Il2CppRGCTXDataType)3, 17172 },
	{ (Il2CppRGCTXDataType)3, 7636 },
	{ (Il2CppRGCTXDataType)3, 52974 },
	{ (Il2CppRGCTXDataType)2, 1334 },
	{ (Il2CppRGCTXDataType)3, 357 },
	{ (Il2CppRGCTXDataType)2, 6343 },
	{ (Il2CppRGCTXDataType)2, 4509 },
	{ (Il2CppRGCTXDataType)2, 4764 },
	{ (Il2CppRGCTXDataType)2, 5102 },
	{ (Il2CppRGCTXDataType)2, 6344 },
	{ (Il2CppRGCTXDataType)2, 4510 },
	{ (Il2CppRGCTXDataType)2, 4765 },
	{ (Il2CppRGCTXDataType)2, 5103 },
	{ (Il2CppRGCTXDataType)2, 4766 },
	{ (Il2CppRGCTXDataType)2, 5104 },
	{ (Il2CppRGCTXDataType)3, 17164 },
	{ (Il2CppRGCTXDataType)2, 6345 },
	{ (Il2CppRGCTXDataType)2, 4511 },
	{ (Il2CppRGCTXDataType)2, 4767 },
	{ (Il2CppRGCTXDataType)2, 5105 },
	{ (Il2CppRGCTXDataType)2, 4768 },
	{ (Il2CppRGCTXDataType)2, 5106 },
	{ (Il2CppRGCTXDataType)3, 17165 },
	{ (Il2CppRGCTXDataType)2, 6342 },
	{ (Il2CppRGCTXDataType)2, 4763 },
	{ (Il2CppRGCTXDataType)2, 5101 },
	{ (Il2CppRGCTXDataType)2, 2916 },
	{ (Il2CppRGCTXDataType)2, 4744 },
	{ (Il2CppRGCTXDataType)2, 4745 },
	{ (Il2CppRGCTXDataType)2, 5098 },
	{ (Il2CppRGCTXDataType)3, 17161 },
	{ (Il2CppRGCTXDataType)2, 4743 },
	{ (Il2CppRGCTXDataType)2, 5097 },
	{ (Il2CppRGCTXDataType)3, 17160 },
	{ (Il2CppRGCTXDataType)2, 4508 },
	{ (Il2CppRGCTXDataType)2, 4761 },
	{ (Il2CppRGCTXDataType)2, 4762 },
	{ (Il2CppRGCTXDataType)2, 5100 },
	{ (Il2CppRGCTXDataType)3, 17163 },
	{ (Il2CppRGCTXDataType)2, 4507 },
	{ (Il2CppRGCTXDataType)3, 52916 },
	{ (Il2CppRGCTXDataType)3, 15752 },
	{ (Il2CppRGCTXDataType)2, 3956 },
	{ (Il2CppRGCTXDataType)2, 4747 },
	{ (Il2CppRGCTXDataType)2, 5099 },
	{ (Il2CppRGCTXDataType)2, 5356 },
	{ (Il2CppRGCTXDataType)2, 4794 },
	{ (Il2CppRGCTXDataType)2, 5112 },
	{ (Il2CppRGCTXDataType)3, 17414 },
	{ (Il2CppRGCTXDataType)3, 27265 },
	{ (Il2CppRGCTXDataType)3, 27267 },
	{ (Il2CppRGCTXDataType)2, 936 },
	{ (Il2CppRGCTXDataType)3, 27266 },
	{ (Il2CppRGCTXDataType)3, 27275 },
	{ (Il2CppRGCTXDataType)2, 7282 },
	{ (Il2CppRGCTXDataType)2, 10810 },
	{ (Il2CppRGCTXDataType)3, 47488 },
	{ (Il2CppRGCTXDataType)3, 27276 },
	{ (Il2CppRGCTXDataType)2, 4859 },
	{ (Il2CppRGCTXDataType)2, 5161 },
	{ (Il2CppRGCTXDataType)3, 17181 },
	{ (Il2CppRGCTXDataType)3, 52881 },
	{ (Il2CppRGCTXDataType)2, 10860 },
	{ (Il2CppRGCTXDataType)3, 47597 },
	{ (Il2CppRGCTXDataType)3, 27268 },
	{ (Il2CppRGCTXDataType)2, 7281 },
	{ (Il2CppRGCTXDataType)2, 10796 },
	{ (Il2CppRGCTXDataType)3, 47472 },
	{ (Il2CppRGCTXDataType)3, 17180 },
	{ (Il2CppRGCTXDataType)3, 27269 },
	{ (Il2CppRGCTXDataType)3, 52880 },
	{ (Il2CppRGCTXDataType)2, 10844 },
	{ (Il2CppRGCTXDataType)3, 47532 },
	{ (Il2CppRGCTXDataType)3, 27282 },
	{ (Il2CppRGCTXDataType)2, 7283 },
	{ (Il2CppRGCTXDataType)2, 10830 },
	{ (Il2CppRGCTXDataType)3, 47516 },
	{ (Il2CppRGCTXDataType)3, 29525 },
	{ (Il2CppRGCTXDataType)3, 13601 },
	{ (Il2CppRGCTXDataType)3, 17182 },
	{ (Il2CppRGCTXDataType)3, 13600 },
	{ (Il2CppRGCTXDataType)3, 27283 },
	{ (Il2CppRGCTXDataType)3, 52882 },
	{ (Il2CppRGCTXDataType)2, 10876 },
	{ (Il2CppRGCTXDataType)3, 47674 },
	{ (Il2CppRGCTXDataType)3, 27296 },
	{ (Il2CppRGCTXDataType)2, 7285 },
	{ (Il2CppRGCTXDataType)2, 10862 },
	{ (Il2CppRGCTXDataType)3, 47599 },
	{ (Il2CppRGCTXDataType)3, 27297 },
	{ (Il2CppRGCTXDataType)2, 4862 },
	{ (Il2CppRGCTXDataType)2, 5164 },
	{ (Il2CppRGCTXDataType)3, 17186 },
	{ (Il2CppRGCTXDataType)3, 17185 },
	{ (Il2CppRGCTXDataType)2, 10812 },
	{ (Il2CppRGCTXDataType)3, 47490 },
	{ (Il2CppRGCTXDataType)3, 52888 },
	{ (Il2CppRGCTXDataType)2, 10861 },
	{ (Il2CppRGCTXDataType)3, 47598 },
	{ (Il2CppRGCTXDataType)3, 27289 },
	{ (Il2CppRGCTXDataType)2, 7284 },
	{ (Il2CppRGCTXDataType)2, 10846 },
	{ (Il2CppRGCTXDataType)3, 47534 },
	{ (Il2CppRGCTXDataType)3, 17184 },
	{ (Il2CppRGCTXDataType)3, 17183 },
	{ (Il2CppRGCTXDataType)3, 27290 },
	{ (Il2CppRGCTXDataType)2, 10811 },
	{ (Il2CppRGCTXDataType)3, 47489 },
	{ (Il2CppRGCTXDataType)3, 52887 },
	{ (Il2CppRGCTXDataType)2, 10845 },
	{ (Il2CppRGCTXDataType)3, 47533 },
	{ (Il2CppRGCTXDataType)3, 27303 },
	{ (Il2CppRGCTXDataType)2, 7286 },
	{ (Il2CppRGCTXDataType)2, 10878 },
	{ (Il2CppRGCTXDataType)3, 47676 },
	{ (Il2CppRGCTXDataType)3, 29526 },
	{ (Il2CppRGCTXDataType)3, 13603 },
	{ (Il2CppRGCTXDataType)3, 17188 },
	{ (Il2CppRGCTXDataType)3, 17187 },
	{ (Il2CppRGCTXDataType)3, 13602 },
	{ (Il2CppRGCTXDataType)3, 27304 },
	{ (Il2CppRGCTXDataType)2, 10813 },
	{ (Il2CppRGCTXDataType)3, 47491 },
	{ (Il2CppRGCTXDataType)3, 52889 },
	{ (Il2CppRGCTXDataType)2, 10877 },
	{ (Il2CppRGCTXDataType)3, 47675 },
	{ (Il2CppRGCTXDataType)3, 17177 },
	{ (Il2CppRGCTXDataType)3, 17178 },
	{ (Il2CppRGCTXDataType)3, 17189 },
	{ (Il2CppRGCTXDataType)3, 388 },
	{ (Il2CppRGCTXDataType)3, 387 },
	{ (Il2CppRGCTXDataType)2, 4848 },
	{ (Il2CppRGCTXDataType)2, 5153 },
	{ (Il2CppRGCTXDataType)3, 17179 },
	{ (Il2CppRGCTXDataType)2, 4885 },
	{ (Il2CppRGCTXDataType)2, 5193 },
	{ (Il2CppRGCTXDataType)3, 390 },
	{ (Il2CppRGCTXDataType)2, 1178 },
	{ (Il2CppRGCTXDataType)2, 1343 },
	{ (Il2CppRGCTXDataType)3, 386 },
	{ (Il2CppRGCTXDataType)3, 389 },
	{ (Il2CppRGCTXDataType)3, 423 },
	{ (Il2CppRGCTXDataType)2, 4851 },
	{ (Il2CppRGCTXDataType)2, 5155 },
	{ (Il2CppRGCTXDataType)3, 425 },
	{ (Il2CppRGCTXDataType)2, 932 },
	{ (Il2CppRGCTXDataType)2, 1352 },
	{ (Il2CppRGCTXDataType)3, 422 },
	{ (Il2CppRGCTXDataType)3, 424 },
	{ (Il2CppRGCTXDataType)3, 253 },
	{ (Il2CppRGCTXDataType)2, 9968 },
	{ (Il2CppRGCTXDataType)3, 43294 },
	{ (Il2CppRGCTXDataType)2, 4841 },
	{ (Il2CppRGCTXDataType)2, 5148 },
	{ (Il2CppRGCTXDataType)3, 43295 },
	{ (Il2CppRGCTXDataType)3, 255 },
	{ (Il2CppRGCTXDataType)2, 925 },
	{ (Il2CppRGCTXDataType)2, 1305 },
	{ (Il2CppRGCTXDataType)3, 252 },
	{ (Il2CppRGCTXDataType)3, 254 },
	{ (Il2CppRGCTXDataType)3, 446 },
	{ (Il2CppRGCTXDataType)3, 447 },
	{ (Il2CppRGCTXDataType)2, 9972 },
	{ (Il2CppRGCTXDataType)3, 43299 },
	{ (Il2CppRGCTXDataType)2, 4854 },
	{ (Il2CppRGCTXDataType)2, 5157 },
	{ (Il2CppRGCTXDataType)3, 43300 },
	{ (Il2CppRGCTXDataType)3, 449 },
	{ (Il2CppRGCTXDataType)2, 934 },
	{ (Il2CppRGCTXDataType)2, 1355 },
	{ (Il2CppRGCTXDataType)3, 445 },
	{ (Il2CppRGCTXDataType)3, 448 },
	{ (Il2CppRGCTXDataType)3, 345 },
	{ (Il2CppRGCTXDataType)2, 9970 },
	{ (Il2CppRGCTXDataType)3, 43296 },
	{ (Il2CppRGCTXDataType)2, 4844 },
	{ (Il2CppRGCTXDataType)2, 5150 },
	{ (Il2CppRGCTXDataType)3, 43297 },
	{ (Il2CppRGCTXDataType)3, 43298 },
	{ (Il2CppRGCTXDataType)3, 347 },
	{ (Il2CppRGCTXDataType)2, 927 },
	{ (Il2CppRGCTXDataType)2, 1332 },
	{ (Il2CppRGCTXDataType)3, 344 },
	{ (Il2CppRGCTXDataType)3, 346 },
	{ (Il2CppRGCTXDataType)3, 359 },
	{ (Il2CppRGCTXDataType)2, 929 },
	{ (Il2CppRGCTXDataType)3, 361 },
	{ (Il2CppRGCTXDataType)2, 1335 },
	{ (Il2CppRGCTXDataType)3, 358 },
	{ (Il2CppRGCTXDataType)3, 360 },
	{ (Il2CppRGCTXDataType)2, 11654 },
	{ (Il2CppRGCTXDataType)2, 2917 },
	{ (Il2CppRGCTXDataType)3, 15792 },
	{ (Il2CppRGCTXDataType)2, 3972 },
	{ (Il2CppRGCTXDataType)2, 12127 },
	{ (Il2CppRGCTXDataType)3, 43291 },
	{ (Il2CppRGCTXDataType)3, 43292 },
	{ (Il2CppRGCTXDataType)2, 5373 },
	{ (Il2CppRGCTXDataType)3, 43293 },
	{ (Il2CppRGCTXDataType)2, 827 },
	{ (Il2CppRGCTXDataType)2, 1307 },
	{ (Il2CppRGCTXDataType)3, 265 },
	{ (Il2CppRGCTXDataType)3, 37432 },
	{ (Il2CppRGCTXDataType)2, 8780 },
	{ (Il2CppRGCTXDataType)3, 37459 },
	{ (Il2CppRGCTXDataType)2, 1705 },
	{ (Il2CppRGCTXDataType)3, 3244 },
	{ (Il2CppRGCTXDataType)3, 37438 },
	{ (Il2CppRGCTXDataType)3, 13543 },
	{ (Il2CppRGCTXDataType)2, 971 },
	{ (Il2CppRGCTXDataType)3, 37433 },
	{ (Il2CppRGCTXDataType)2, 8775 },
	{ (Il2CppRGCTXDataType)3, 3673 },
	{ (Il2CppRGCTXDataType)2, 1728 },
	{ (Il2CppRGCTXDataType)2, 3114 },
	{ (Il2CppRGCTXDataType)3, 13561 },
	{ (Il2CppRGCTXDataType)3, 37434 },
	{ (Il2CppRGCTXDataType)3, 13538 },
	{ (Il2CppRGCTXDataType)3, 13539 },
	{ (Il2CppRGCTXDataType)3, 13537 },
	{ (Il2CppRGCTXDataType)3, 13540 },
	{ (Il2CppRGCTXDataType)2, 3110 },
	{ (Il2CppRGCTXDataType)2, 11713 },
	{ (Il2CppRGCTXDataType)3, 17175 },
	{ (Il2CppRGCTXDataType)3, 13542 },
	{ (Il2CppRGCTXDataType)2, 4674 },
	{ (Il2CppRGCTXDataType)3, 13541 },
	{ (Il2CppRGCTXDataType)2, 4516 },
	{ (Il2CppRGCTXDataType)2, 11644 },
	{ (Il2CppRGCTXDataType)2, 4799 },
	{ (Il2CppRGCTXDataType)2, 5115 },
	{ (Il2CppRGCTXDataType)3, 15771 },
	{ (Il2CppRGCTXDataType)2, 3965 },
	{ (Il2CppRGCTXDataType)3, 18126 },
	{ (Il2CppRGCTXDataType)3, 18127 },
	{ (Il2CppRGCTXDataType)3, 18132 },
	{ (Il2CppRGCTXDataType)2, 5367 },
	{ (Il2CppRGCTXDataType)3, 18129 },
	{ (Il2CppRGCTXDataType)3, 54136 },
	{ (Il2CppRGCTXDataType)2, 3118 },
	{ (Il2CppRGCTXDataType)3, 13591 },
	{ (Il2CppRGCTXDataType)1, 4665 },
	{ (Il2CppRGCTXDataType)2, 11660 },
	{ (Il2CppRGCTXDataType)3, 18128 },
	{ (Il2CppRGCTXDataType)1, 11660 },
	{ (Il2CppRGCTXDataType)1, 5367 },
	{ (Il2CppRGCTXDataType)2, 12125 },
	{ (Il2CppRGCTXDataType)2, 11660 },
	{ (Il2CppRGCTXDataType)2, 4805 },
	{ (Il2CppRGCTXDataType)2, 5119 },
	{ (Il2CppRGCTXDataType)3, 18133 },
	{ (Il2CppRGCTXDataType)3, 18131 },
	{ (Il2CppRGCTXDataType)3, 18130 },
	{ (Il2CppRGCTXDataType)2, 702 },
	{ (Il2CppRGCTXDataType)3, 13604 },
	{ (Il2CppRGCTXDataType)2, 946 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	207,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	70,
	s_rgctxIndices,
	317,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
