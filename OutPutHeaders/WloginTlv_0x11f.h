/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WloginTlv.h"


@interface WloginTlv_0x11f : WloginTlv {
	unsigned dwExchangeTime;
	unsigned dwPriority;
}
@property(assign) unsigned dwPriority;
@property(assign) unsigned dwExchangeTime;
-(int)decode:(char**)decode andBuffLen:(int*)len;
@end

