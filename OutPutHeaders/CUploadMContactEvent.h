/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "CMultiEvent.h"

@class NSMutableArray, NSString;

@interface CUploadMContactEvent : CMultiEvent {
	NSMutableArray* m_arrMobileList;
	NSString* m_nsMobile;
	unsigned long m_uiUploadCount;
	NSMutableArray* m_arrEmailList;
}
@property(retain, nonatomic) NSMutableArray* m_arrEmailList;
@property(retain, nonatomic) NSMutableArray* m_arrMobileList;
-(void).cxx_destruct;
-(void)NotifyFromEvent:(id)event Message:(unsigned long)message MessageInfo:(id)info;
-(BOOL)CreateUploadEvent;
-(void)Stop;
-(BOOL)Start:(unsigned*)start RetInfo:(id)info;
-(BOOL)SetEventInfo:(id)info;
-(void)TimerCheckEvent;
-(void)dealloc;
-(id)init;
@end
