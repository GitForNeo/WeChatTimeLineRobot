/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "UIAlertViewDelegate.h"
#import "BaseMessageNodeView.h"

@class NSString, FavoritesItemDataField;

@interface AppRecordMessageNodeView : BaseMessageNodeView <UIAlertViewDelegate> {
	BOOL m_bNoMedia;
	FavoritesItemDataField* m_firstMediaData;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(BOOL)canCreateMessageNodeViewInstanceWithMessageWrap:(id)messageWrap;
-(void).cxx_destruct;
-(id)getMoreMainInfomationAccessibilityDescription;
-(void)onMenuItemWillHide;
-(void)onTouchCancel;
-(void)onLongTouch;
-(void)onTouchUpInside;
-(void)onTouchDownRepeat;
-(void)onTouchDown;
-(void)onClearResource;
-(void)onDisappear;
-(void)onClick;
-(void)onMoreOperate:(id)operate;
-(void)onForward:(id)forward;
-(void)onFavoriteAdd:(id)add;
-(void)showOpearation;
-(void)updateBkgImage:(BOOL)image;
-(id)genCenterImage:(id)image;
-(id)getBackgroundImageHL;
-(id)getBackgroundImage;
-(id)getTitleText;
-(void)initData;
-(void)updateThumbImage;
-(void)updateStatus:(id)status;
-(void)layoutSubviewsInternal;
-(CGSize)sizeForFrame:(CGRect)frame;
@end
