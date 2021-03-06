/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "IEnterpriseGroupMgrExt.h"
#import "MMWebViewDelegate.h"
#import "WeChat-Structs.h"
#import "IEnterpriseSessionMgrExt.h"
#import "MMUIViewController.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "IMMNewSessionMgrExt.h"

@class MMTitleView, UIView, NSString, MMTableView, CContact, NSMutableArray, MMScrollView;

@interface EnterpriseSessionListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, IEnterpriseSessionMgrExt, IEnterpriseGroupMgrExt, IMMNewSessionMgrExt, MMWebViewDelegate> {
	unsigned long _scene;
	MMTableView* _tableView;
	MMScrollView* _emptyView;
	MMTitleView* _titleView;
	UIView* _footerView;
	UIView* _footerViewBackground;
	NSMutableArray* _arySpecialSession;
	float preContentOffsetY;
	CContact* brandContact;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) CContact* brandContact;
-(void).cxx_destruct;
-(void)onWebViewWillClose:(id)onWebView;
-(void)onSessionTotalUnreadCountChange:(unsigned long)change;
-(void)onCreateEnterpriseGroup:(id)group errorCode:(int)code extDic:(id)dic;
-(void)onQuitEnterpriseGroup:(id)group errorCode:(int)code;
-(void)onEnterpriseSessionChanged;
-(id)makeNormalCell:(id)cell;
-(id)makeSpecialCell:(id)cell;
-(BOOL)isSpecialIndex:(id)index;
-(id)brandCellDataWithMainUsrName:(id)mainUsrName;
-(void)scrollViewWillEndDragging:(id)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(inout CGPoint*)offset;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)enterChat:(id)chat;
-(void)updateMemberToLocal:(id)local;
-(void)createChatroom:(id)chatroom;
-(void)createSingleChat:(id)chat;
-(void)openEnterpriseBrandSessionListView;
-(void)openFavSessionListView:(id)view;
-(void)openCreateChat:(id)chat;
-(void)openChatBrandInfo:(id)info;
-(void)showRightTopMenuBtn:(id)btn;
-(void)viewWillBePoped:(BOOL)view;
-(void)viewWillBePushed:(BOOL)view;
-(void)willDisappear;
-(void)willAppear;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)updateLeftBarItem;
-(void)hideSpecialSession;
-(void)initFooterView;
-(void)updateEmptyView;
-(void)initEmptyView;
-(void)initData;
-(void)setScene:(unsigned long)scene;
-(void)dealloc;
-(id)initWithBrand:(id)brand;
@end

