/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class TrackPOIItem, UserPositionItem, NSString, BaseRequest;

@interface RefreshTrackRoomRequest : WXPBGeneratedMessage {
}
@property(retain, nonatomic) TrackPOIItem* userPoi;
@property(assign, nonatomic) unsigned timeStamp;
@property(retain, nonatomic) UserPositionItem* userPosition;
@property(assign, nonatomic) int type;
@property(retain, nonatomic) NSString* trackRoomId;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end

