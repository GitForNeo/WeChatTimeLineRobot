/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "settingMyAccountExtInfoLogicDelegate.h"
#import "MMRegionPickerViewControllerDelegate.h"
#import "CSettingExt.h"
#import "settingModifySignDelegate.h"
#import "SettingBaseViewController.h"
#import "MMPickerViewDelegate.h"

@class NSString, SettingMyAccountExtInfoLogic, MMPickerView;
@protocol settingMyAccountExtInfoDelegate;

@interface SettingMyAccountExtInfoViewController : SettingBaseViewController <settingModifySignDelegate, MMPickerViewDelegate, MMRegionPickerViewControllerDelegate, settingMyAccountExtInfoLogicDelegate, CSettingExt> {
	map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int> > > m_mapAccountCellToCellType;
	map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int> > > m_mapSessionType;
	id<settingMyAccountExtInfoDelegate> m_delegate;
	unsigned long m_curPickerMode;
	MMPickerView* m_pickerView;
	SettingMyAccountExtInfoLogic* m_infoLogic;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<settingMyAccountExtInfoDelegate> m_delegate;
-(id).cxx_construct;
-(void).cxx_destruct;
-(void)onSettingChanged:(int)changed;
-(void)onInfoChange;
-(void)dealloc;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)showModifySignView;
-(void)showModifyAddressView;
-(void)showModifySexView:(id)view;
-(void)MMPickerViewDidChooseRowTitle:(id)mmpickerView atSessionTitle:(id)sessionTitle;
-(void)MMRegionPickerDidChoosRegion:(id)mmregionPicker;
-(void)saveNewSign:(id)sign;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(void)makeAccountCell:(id)cell row:(unsigned)row;
-(void)makeAddressCell:(id)cell;
-(void)makeSexCell:(id)cell;
-(void)makeCellInfoInternal:(id)internal col:(id)col value:(id)value mustFill:(BOOL)fill;
-(id)makeMustFillLabel;
-(void)makeSignCell:(id)cell;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)ChangeSex:(id)sex;
-(void)SaveAndExit;
-(void)Save;
-(void)returnBack;
-(void)initCellType;
-(void)initSessionType;
@end

