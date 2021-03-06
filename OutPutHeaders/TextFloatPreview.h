/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMUIWindow.h"
#import "scrollViewDelegate.h"
#import "ILinkEventExt.h"

@class UIImageView, CTRichTextView, TextFloatViewController, UIView, NSString, MMScrollView, UIButton, UIFont;
@protocol TextFloatPreviewDelegate;

@interface TextFloatPreview : MMUIWindow <ILinkEventExt, scrollViewDelegate> {
	UIView* m_oBackView;
	UIButton* m_view;
	UIImageView* m_headerMask;
	MMScrollView* m_oScrollView;
	CTRichTextView* m_oRichTextView;
	id<ILinkEventExt> m_linkDelegate;
	CGPoint m_origin;
	id<TextFloatPreviewDelegate> m_delegate;
	BOOL _bNeedRebuildTextView;
	BOOL m_bHidden;
	TextFloatViewController* m_viewController;
	NSString* _nsContent;
	UIFont* _oFont;
	unsigned _parserType;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<TextFloatPreviewDelegate> m_delegate;
@property(assign, nonatomic) unsigned parserType;
@property(retain, nonatomic) UIFont* oFont;
@property(retain, nonatomic) NSString* nsContent;
-(void).cxx_destruct;
-(BOOL)respondsToSelector:(SEL)selector;
-(id)forwardingTargetForSelector:(SEL)selector;
-(void)hideWithAnimate:(BOOL)animate;
-(void)showWithAnimate:(BOOL)animate;
-(void)touchesEnded_ScrollView:(id)view withEvent:(id)event;
-(void)onSingleTap;
-(void)setOriginFrame:(CGRect)frame;
-(void)setContent:(id)content;
-(void)updateTextView;
-(void)setLinkDelegate:(id)delegate;
-(id)getTextView;
-(void)layoutSubviews;
-(id)init;
@end

