/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface MCMigrator : NSObject
+(id)sharedMigrator;
-(void)migrateWithPostMigrationTaskQueue:(id)arg1 ;
-(void)migratePostDataMigratorWithContext:(int)arg1 passcodeWasSetInBackup:(BOOL)arg2 forceAllowHostPairing:(BOOL)arg3 ;
-(void)_createDirectories;
-(void)_moveFilesToPublicDirectories;
-(void)_migrateManifestLocation;
-(void)_removeUnusedManifestArrays;
-(void)_removeDuplicatedHiddenIdentifiers;
-(void)_createStubs;
-(void)_removeOrphanedManifestEntries;
-(void)_transferSignerCertificates;
-(void)_transferRemovalPasswordsFromOriginalProfiles;
-(void)_migrateDefaults;
-(void)_migrateOTAProfiles;
-(void)_transferInstallationDatesFromOriginalProfiles;
-(void)_transferTagsToProfileStubs;
-(void)_removeOriginalCopies;
-(void)_applyDefaultSettings;
-(void)_migrateSettings;
-(void)_migrateClientRestrictions;
-(void)_updateClientRestrictions;
-(void)_updateProfileRestrictions;
-(void)_applyImpliedSettings;
-(void)_migrateIdentitiesToIdentitiesGroup;
-(void)_migrateCertificatesToCertificatesGroup;
-(void)_migrateSupervisionSettings;
-(void)_removeSupervisionProfiles;
-(void)_cleanUpAppConfiguration;
-(void)_removeUnmanageableApps;
-(void)_migrateProfileStubsForNetworkExtension;
-(void)_tagManagedAccounts;
-(void)_tagIMAPAccountsWithProfileAndPayloadProperties;
-(void)_wakeDaemonsPostMigration;
-(void)_migratePasscodeDidRestore:(BOOL)arg1 passcodeWasSet:(BOOL)arg2 ;
-(void)_removeiPCUCertificates;
-(void)_moveSignerCertificatesInProfileStubDictionary:(id)arg1 ;
-(BOOL)_applyAccountTagsToProfile:(id)arg1 ;
-(void)_migrateBoolRestrictions:(id)arg1 withAppID:(id)arg2 forKey:(id)arg3 valuesToRestrictions:(id)arg4 currentBoolUserSettings:(id)arg5 ;
-(void)_migrateValueRestrictions:(id)arg1 withAppID:(id)arg2 forKey:(id)arg3 keysToRestricitons:(id)arg4 currentValueUserSettings:(id)arg5 ;
-(void)_migrateBoolValueToFeature:(id)arg1 withAppID:(id)arg2 forKey:(id)arg3 synchronize:(BOOL)arg4 ;
-(BOOL)__migratePersistentIDToIdentityGroup:(id)arg1 ;
-(BOOL)__migratePersistentIDToCertificateGroup:(id)arg1 ;
-(id)_lastMigratedBuildVersion;
-(void)setMetadataDictionary:(id)arg1 ;
-(id)metadataDictionary;
@end
