/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCListBaseCellView.h"

@class UIView;

@interface WCListFeedCellView : WCListBaseCellView {
	UIView* m_tailView;
}
+(float)calculateHeightForRowData:(id)rowData isFirstOneInsection:(BOOL)insection isLastOneInSection:(BOOL)section;
-(void).cxx_destruct;
-(void)setHighlightedColor;
-(void)setNormalColor;
-(void)onClickEvent;
-(void)initView;
-(void)initTailView;
@end
