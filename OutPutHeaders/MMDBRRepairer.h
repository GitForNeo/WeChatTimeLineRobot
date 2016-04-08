/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface MMDBRRepairer : XXUnknownSuperclass {
	unsigned m_tableNum;
	unsigned m_startTime;
	unsigned m_timeLength;
	unsigned long long m_dbSizeBefore;
	unsigned long long m_dbSizeAfter;
	unsigned long long m_diskRestSpaceBefore;
}
@property(assign, nonatomic) unsigned m_timeLength;
@property(assign, nonatomic) unsigned m_startTime;
@property(assign, nonatomic) unsigned m_tableNum;
@property(assign, nonatomic) unsigned long long m_diskRestSpaceBefore;
@property(assign, nonatomic) unsigned long long m_dbSizeAfter;
@property(assign, nonatomic) unsigned long long m_dbSizeBefore;
+(unsigned long long)diskRestSpace;
+(void)recordDBPath:(id)path size:(unsigned long long*)size;
+(id)stringWithDate;
+(BOOL)IsDiskSpaceLowWithAssist:(id)assist andGetRestSize:(unsigned long long*)size suggustSize:(unsigned long long*)size3;
-(void)markEndTime;
-(void)markStartTime;
-(void)resetData;
-(BOOL)backupOldDBPath:(id)path toDir:(id)dir andRenewWithNewDBPath:(id)newDBPath assist:(id)assist error:(id*)error;
-(id)generateBackupDBDir:(id)dir;
-(BOOL)importDBPath:(id)path fromSQLFile:(id)sqlfile error:(id*)error;
-(BOOL)exportDBWithPath:(id)path toSQLFile:(id)sqlfile error:(id*)error;
-(void)backupBeforeRepair:(id)repair withAssist:(id)assist;
-(BOOL)repairDBWithPath:(id)path exportSQLPath:(id)path2 exportDBPath:(id)path3 backupDBDir:(id)dir assist:(id)assist error:(id*)error;
-(id)errorWithCode:(unsigned)code Description:(id)description;
-(void)createDir:(id)dir;
-(void)createFile:(id)file;
-(void)removeFile:(id)file;
-(BOOL)RepairDatabase:(id)database getError:(id*)error;
-(void)dealloc;
-(id)init;
@end
