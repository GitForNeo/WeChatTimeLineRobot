/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"

@class UIView, UILabel;

@interface GameCenterPlayInfoView : XXUnknownSuperclass {
	UIView* _leftBanner;
	UILabel* _playInfoSummaryView;
}
@property(retain, nonatomic) UILabel* playInfoSummaryView;
@property(retain, nonatomic) UIView* leftBanner;
+(float)calViewHeight:(id)height maxWidth:(float)width;
-(void).cxx_destruct;
-(void)makeView:(id)view;
-(id)initWithPlayInfo:(CGRect)playInfo playInformation:(id)information;
@end
