/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMUIViewController.h"
#import "WeChat-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"

@class MMTableView, NSMutableArray, NSString;
@protocol VoiceSearchMutilLevelViewDelegate;

@interface VoiceSearchMutilLevelViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource> {
	MMTableView* m_tableView;
	NSMutableArray* m_mutableArray;
	BOOL m_isFirstControl;
	id<VoiceSearchMutilLevelViewDelegate> m_voiceSearchMutilLevelViewDelegate;
	BOOL m_seperatorMode;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL m_seperatorMode;
@property(retain, nonatomic) NSMutableArray* m_mutableArray;
@property(assign, nonatomic) __weak id<VoiceSearchMutilLevelViewDelegate> m_voiceSearchMutilLevelViewDelegate;
-(void).cxx_destruct;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)viewDidBePoped:(BOOL)view;
-(void)backToPreView:(id)preView;
-(void)viewDidUnload;
-(void)willAppear;
-(void)setNotUploadData;
-(void)didAppear;
-(void)loadView;
-(id)init;
-(void)onTopBarFrameChanged;
-(void)initTableView;
@end
