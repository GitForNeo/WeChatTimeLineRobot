/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "PBCoding.h"

@class NSString;

@interface PBBaseContact : XXUnknownSuperclass <PBCoding> {
	NSString* userName;
	NSString* aliasName;
	unsigned conType;
	NSString* nickName;
	NSString* fullPy;
	NSString* remark;
	NSString* remarkPyshort;
	NSString* remarkPyfull;
	unsigned sex;
	unsigned type;
	unsigned chatState;
	NSString* imgStatus;
	NSString* hdimgStatus;
	NSString* headImgUrl;
	NSString* headHdimgUrl;
	NSString* draft;
	unsigned qquin;
	NSString* qqnickName;
	NSString* qqremark;
	NSString* mobileIdentify;
	unsigned friendScene;
	unsigned imgKey;
	unsigned extKey;
	unsigned imgKeyAtLastGet;
	unsigned extKeyAtLastGet;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) unsigned extKeyAtLastGet;
@property(assign, nonatomic) unsigned imgKeyAtLastGet;
@property(assign, nonatomic) unsigned extKey;
@property(assign, nonatomic) unsigned imgKey;
@property(assign, nonatomic) unsigned friendScene;
@property(retain, nonatomic) NSString* mobileIdentify;
@property(retain, nonatomic) NSString* qqremark;
@property(retain, nonatomic) NSString* qqnickName;
@property(assign, nonatomic) unsigned qquin;
@property(retain, nonatomic) NSString* draft;
@property(retain, nonatomic) NSString* headHdimgUrl;
@property(retain, nonatomic) NSString* headImgUrl;
@property(retain, nonatomic) NSString* hdimgStatus;
@property(retain, nonatomic) NSString* imgStatus;
@property(assign, nonatomic) unsigned chatState;
@property(assign, nonatomic) unsigned type;
@property(assign, nonatomic) unsigned sex;
@property(retain, nonatomic) NSString* remarkPyfull;
@property(retain, nonatomic) NSString* remarkPyshort;
@property(retain, nonatomic) NSString* remark;
@property(retain, nonatomic) NSString* fullPy;
@property(retain, nonatomic) NSString* nickName;
@property(assign, nonatomic) unsigned conType;
@property(retain, nonatomic) NSString* aliasName;
@property(retain, nonatomic) NSString* userName;
+(void)initialize;
-(void).cxx_destruct;
-(const map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >*)getValueTagIndexMap;
-(id)getValueTypeTable;
-(void)setFromCBaseContact:(id)cbaseContact;
-(id)toCBaseContact;
@end
