/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class NSMutableArray, NSString, BaseRequest;

@interface APAuthRequest : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned hasMobile;
@property(retain, nonatomic) NSString* sessionKey;
@property(assign, nonatomic) unsigned channel;
@property(retain, nonatomic) NSMutableArray* apInfo;
@property(assign, nonatomic) unsigned opCode;
@property(retain, nonatomic) NSString* token;
@property(retain, nonatomic) NSString* apauthData;
@property(retain, nonatomic) NSString* mid;
@property(retain, nonatomic) NSString* ssid;
@property(retain, nonatomic) NSString* url;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end
