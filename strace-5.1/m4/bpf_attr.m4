dnl Generated by ./m4/gen_bpf_attr_m4.sh from bpf_attr.h; do not edit.
AC_DEFUN([st_BPF_ATTR], [dnl
	AC_CHECK_MEMBERS(m4_normalize([
		struct bpf_map_info.btf_id,
		struct bpf_map_info.btf_key_type_id,
		struct bpf_map_info.btf_value_type_id,
		struct bpf_map_info.id,
		struct bpf_map_info.ifindex,
		struct bpf_map_info.key_size,
		struct bpf_map_info.map_flags,
		struct bpf_map_info.max_entries,
		struct bpf_map_info.name,
		struct bpf_map_info.type,
		struct bpf_map_info.value_size,
		struct bpf_prog_info.btf_id,
		struct bpf_prog_info.created_by_uid,
		struct bpf_prog_info.func_info,
		struct bpf_prog_info.func_info_rec_size,
		struct bpf_prog_info.id,
		struct bpf_prog_info.ifindex,
		struct bpf_prog_info.jited_func_lens,
		struct bpf_prog_info.jited_ksyms,
		struct bpf_prog_info.jited_line_info,
		struct bpf_prog_info.jited_line_info_rec_size,
		struct bpf_prog_info.jited_prog_insns,
		struct bpf_prog_info.jited_prog_len,
		struct bpf_prog_info.line_info,
		struct bpf_prog_info.line_info_rec_size,
		struct bpf_prog_info.load_time,
		struct bpf_prog_info.map_ids,
		struct bpf_prog_info.name,
		struct bpf_prog_info.nr_func_info,
		struct bpf_prog_info.nr_jited_func_lens,
		struct bpf_prog_info.nr_jited_ksyms,
		struct bpf_prog_info.nr_jited_line_info,
		struct bpf_prog_info.nr_line_info,
		struct bpf_prog_info.nr_map_ids,
		struct bpf_prog_info.nr_prog_tags,
		struct bpf_prog_info.prog_tags,
		struct bpf_prog_info.run_cnt,
		struct bpf_prog_info.run_time_ns,
		struct bpf_prog_info.tag,
		struct bpf_prog_info.type,
		struct bpf_prog_info.xlated_prog_insns,
		struct bpf_prog_info.xlated_prog_len,
		union bpf_attr.attach_bpf_fd,
		union bpf_attr.attach_flags,
		union bpf_attr.attach_type,
		union bpf_attr.bpf_fd,
		union bpf_attr.btf,
		union bpf_attr.btf_fd,
		union bpf_attr.btf_id,
		union bpf_attr.btf_key_type_id,
		union bpf_attr.btf_log_buf,
		union bpf_attr.btf_log_level,
		union bpf_attr.btf_log_size,
		union bpf_attr.btf_size,
		union bpf_attr.btf_value_type_id,
		union bpf_attr.dummy,
		union bpf_attr.expected_attach_type,
		union bpf_attr.file_flags,
		union bpf_attr.flags,
		union bpf_attr.func_info,
		union bpf_attr.func_info_cnt,
		union bpf_attr.func_info_rec_size,
		union bpf_attr.info.bpf_fd,
		union bpf_attr.info.info,
		union bpf_attr.info.info_len,
		union bpf_attr.inner_map_fd,
		union bpf_attr.insn_cnt,
		union bpf_attr.insns,
		union bpf_attr.kern_version,
		union bpf_attr.key,
		union bpf_attr.key_size,
		union bpf_attr.license,
		union bpf_attr.line_info,
		union bpf_attr.line_info_cnt,
		union bpf_attr.line_info_rec_size,
		union bpf_attr.log_buf,
		union bpf_attr.log_level,
		union bpf_attr.log_size,
		union bpf_attr.map_fd,
		union bpf_attr.map_flags,
		union bpf_attr.map_id,
		union bpf_attr.map_ifindex,
		union bpf_attr.map_name,
		union bpf_attr.map_type,
		union bpf_attr.max_entries,
		union bpf_attr.next_id,
		union bpf_attr.next_key,
		union bpf_attr.numa_node,
		union bpf_attr.open_flags,
		union bpf_attr.pathname,
		union bpf_attr.prog_btf_fd,
		union bpf_attr.prog_flags,
		union bpf_attr.prog_id,
		union bpf_attr.prog_ifindex,
		union bpf_attr.prog_name,
		union bpf_attr.prog_type,
		union bpf_attr.query.attach_flags,
		union bpf_attr.query.attach_type,
		union bpf_attr.query.prog_cnt,
		union bpf_attr.query.prog_ids,
		union bpf_attr.query.query_flags,
		union bpf_attr.query.target_fd,
		union bpf_attr.raw_tracepoint.name,
		union bpf_attr.raw_tracepoint.prog_fd,
		union bpf_attr.start_id,
		union bpf_attr.target_fd,
		union bpf_attr.task_fd_query.buf,
		union bpf_attr.task_fd_query.buf_len,
		union bpf_attr.task_fd_query.fd,
		union bpf_attr.task_fd_query.fd_type,
		union bpf_attr.task_fd_query.flags,
		union bpf_attr.task_fd_query.pid,
		union bpf_attr.task_fd_query.probe_addr,
		union bpf_attr.task_fd_query.probe_offset,
		union bpf_attr.task_fd_query.prog_id,
		union bpf_attr.test.data_in,
		union bpf_attr.test.data_out,
		union bpf_attr.test.data_size_in,
		union bpf_attr.test.data_size_out,
		union bpf_attr.test.duration,
		union bpf_attr.test.prog_fd,
		union bpf_attr.test.repeat,
		union bpf_attr.test.retval,
		union bpf_attr.value,
		union bpf_attr.value_size,
		union bpf_attr.dummy
	]),,, [#include <linux/bpf.h>])
])
