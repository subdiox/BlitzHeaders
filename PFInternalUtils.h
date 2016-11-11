/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>


@interface PFInternalUtils : NSObject {
}
+(id)_stringWithFormat:(id)format arguments:(id)arguments;
+(id)arrayBySplittingArray:(id)array withMaximumComponentsPerSegment:(unsigned)maximumComponentsPerSegment;
+(id)traverseObject:(id)object usingBlock:(id)block;
+(id)traverseObject:(id)object usingBlock:(id)block seenObjects:(id)objects;
+(void)appendNullToString:(id)string;
+(void)appendNumber:(id)number toString:(id)string;
+(void)appendArray:(id)array toString:(id)string;
+(void)appendDictionary:(id)dictionary toString:(id)string;
+(void)appendObject:(id)object toString:(id)string;
+(id)cacheKeyForObject:(id)object;
+(id)addNumber:(id)number withNumber:(id)number2;
+(id)fileSizeOfFileAtPath:(id)path error:(id*)error;
+(void)safePerformSelector:(SEL)selector withTarget:(id)target object:(id)object object:(id)object4;
+(id)currentSystemTimeZoneName;
+(void)setParseServer:(id)server;
+(id)parseServerURLString;
+(void)initialize;
@end
