/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCoding.h"
#import "PBCoding.h"
#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface ShakeTvActionList : XXUnknownSuperclass <PBCoding, NSCoding, NSCopying> {
	int type;
	NSString* title;
	NSMutableArray* actions;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSMutableArray* actions;
@property(retain, nonatomic) NSString* title;
@property(assign, nonatomic) int type;
+(void)initialize;
-(void).cxx_destruct;
-(id)copyWithZone:(NSZone*)zone;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)init;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getValueTagIndexMap;
-(id)getValueTypeTable;
@end

